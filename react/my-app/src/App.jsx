
import React from 'react';
import ReactDOM from 'react-dom';
import './App.css';
import Head from './Header';
import TableRow from './TableRow';
import a from './App.css';
import {Router} from 'react-router-dom';


class App extends React.Component {

    constructor(props){
        super(props);

        this.state={

            a:12,
            s:'b',
            data:[
                {id:1,name:"n1",password:"p1"},
                {id:2,name:"n2",password:"p2"},
                {id:3,name:"n3",password:"p3"}
            ]

        }

    }

    c=(e) =>{

        //console.log(this);
        //console.log(e.target.value);
        var sel=e.target;
        for(var i=0;i<sel.length;i++){

            var s=sel[i];

            console.log(s.selected);
            if(s.selected){
                this.setState({s:s.value});
            }

        }


        //ReactDOM.findDOMNode(e.target.getDOMNode()).style.color='#ff0';



    }


    updateText=(e)=>{

        this.setState({a:e.target.value});

    }


    a=()=>{

        alert('parent event');
    }


    clear=(e)=>{
    
        this.setState({a:''});
        ReactDOM.findDOMNode(this.refs.t1).focus();
    }


    render(){
        
        var d=["a1","a2","a3"];


        var style={
            color:'#f00'
        };

        return (
            //<Router>
        <div class="oo" onClick={this.c}>
                <Head a={1+2} c1={this.a}/>
                <h1>App</h1>
                <p>{d}</p>
                <p style={style}>{1+1}</p>
                <select class="aa" value={this.state.s} onChange={this.c}>
                        <option value="a">a</option>
                        <option value="b">b</option>
                        <option value="c">c</option>
                    </select>

                <div>
                    <table>
                            {this.state.data.map((obj,index)=>{

                               return (<TableRow data={obj}/>);

                            })}
                        </table>
                    </div>

                <div>
                    <input ref="t1" type="text" value={this.state.a} onChange={this.updateText}/>
                    <div>{this.state.a}</div>
                    <div><button onClick={this.clear}>clear</button></div>
                    </div>


                        
            </div>
        //    </Router>
        );
    
    }

}



export default App;
