import React from 'react';
import {render} from 'react-dom';
import C1 from './C1.jsx';
import { BrowserRouter as Router, Switch, Route, Link } from 'react-router-dom';

import Home from './Home.jsx';
import Login from './Login.jsx'


class App extends React.Component {
   render() {

    {/** */}
    var s={
        
        color:'#f00'

    };


      return (
        <Router>
            <div>
               <h2>Welcome to React Router Tutorial</h2>
               <ul>
                  <li><Link to={'/'}>Home</Link></li>
                  <li><Link to={'/Login'}>Login</Link></li>
               </ul>
               <hr />
               
               <Switch>
                  <Route exact path='/' component={Home} />
                  <Route exact path='/Login' component={Login} />
               </Switch>
            </div>
         </Router>
        

            
            
            /*
         <div>
            <h1>Hello World!!!</h1>
            {<p data-a="atr" style={s}>this is paragraph {1+2}</p>}

            <C12 p="123"/>


            <C1 />


         </div>
        */
      );
   }
}



class C12 extends React.Component {


    render(){

        return (<div>
                
                <p> this is c1 component </p>

                <p> props is {this.props.p} </p>
            </div>
            );

    }

}



export default App;