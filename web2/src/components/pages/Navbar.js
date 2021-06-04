import Button from './Button'
const Navbar = (props) => {
    return (
        <header className='header'>
            <h1 style={navbarstyle}>{props.title}</h1>
           <Button color='green' text ='hello'/>
        </header>
    )
}

const navbarstyle = {
    color:'red' ,backgroundColor:'black'
}

export default Navbar


