import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import registerServiceWorker from './registerServiceWorker';

import App1 from './App1'


ReactDOM.render(<App />, document.getElementById('root'));





ReactDOM.render(<App1 />,document.getElementById('root1'));



/*
function Clock(props) {
    return (
      <div>
        <h1>Hello, world!</h1>
        <h2>It is {props.date.toLocaleTimeString()}.</h2>
      </div>
    );
  }
  
  */



  class Clock extends React.Component{

    constructor(props){
        super(props);
        this.state={date:new Date()};

    }


    componentDidMount(){
        this.tickId=setInterval(
            ()=>{
                this.tick();
            }
            ,1000
        );
    }


    componentWillUnmount(){
        clearInterval(this.tickId);
    }

    tick(){

        this.setState({
            date:new Date()
        })

    }


    clickEvent(){

        alert(1)
    }

    render(){

        return (

            <div>

            <h1 onClick={this.clickEvent}>Clock</h1>
            <h2>{this.state.date.toLocaleTimeString()}</h2>
                </div>

        );

    }


  }


  ReactDOM.render(
    <Clock />,
    document.getElementById('root2')
  );


/*
  function tick() {
    ReactDOM.render(
      <Clock />,
      document.getElementById('root2')
    );
  }
  
  setInterval(tick, 1000);
*/


class Toggle extends React.Component{

    constructor(props){

        super(props);
        this.state={isToggleOn:true};

        this.handleClick=this.handleClick.bind(this);
    }

    handleClick(){
        this.setState(prevState => ({
            isToggleOn:!prevState.isToggleOn
        }));
    }

    render(){

        return (
            <button onClick={this.handleClick}>
                {this.state.isToggleOn?'on':'off'}
                </button>
        );

    }




}

ReactDOM.render(<Toggle />,document.getElementById('root3'));

registerServiceWorker();
