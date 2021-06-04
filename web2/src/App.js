import react from 'react';
import './App.css';
import Navbar from './components/pages/Navbar'

function App() {
   const name='brand'
  return (
    <div className="App">
      <Navbar title='task tracker'/>
      <h1>Hello</h1>
      <h2>hiii {name}</h2>
    </div>
  );
}

export default App;
