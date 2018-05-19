

import React, { Component } from 'react';

/*
class App1 extends React.Component {

    render(){

        return (<h1>app1</h1>);


    }


}

*/ 

class C1 extends Component{

    render(){

        const l=[1,2,3,4,5];

        const liList=l.map((p)=>(
            <li key={p}>{p}</li>
        ));

        return (

            <ul>
                {liList}
                </ul>

        );

    }

}



function Welcome(props) {
return(   <div><h1>Hello, {props.name}</h1>
        <C1 name="foo" />
</div>
    );
  }
  
  function App1() {



    return (
      <div>
        <Welcome name="Sara111" />
        
        <Welcome name="Edite" />
      </div>
    );
  }





 export default App1
