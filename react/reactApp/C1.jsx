import React from 'react';

class C1 extends React.Component{

    constructor(){

        super();

        this.state={
            data:[
                {a:1},
                {a:2},
                {a:3}
            ],
            aa:'this is aa state',
            b:true
        }

        this.handleClick=this.handleClick.bind(this);

    }

    handleClick (){
        this.setState({b:!this.state.b})
    }


    render(){


        return (<div>
                <h1 onClick={this.handleClick}> this is C1 Component</h1>
                {
                    this.state.data.map((o,index) => (
                     (<li key={index}>{o.a}</li>)
                )) 
                }

                <p>{this.state.aa}</p>

                {this.state.b?'true':'false'}
            </div>
            );

    }

}


export default C1;


