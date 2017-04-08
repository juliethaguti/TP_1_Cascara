float pedirNumero();
float sumar(float x,float y);
float restar(float x,float y);
float multiplicar(float x,float y);
float dividir(float x,float y);
int factorial();


/** \brief Pide un numero entero.
 *
 * \param
 * \param
 * \return Retorna el número
 *
 */
float pedirNumero()
{
    float auxiliar;
    printf("Ingrese un numero: ");
    scanf("%f",&auxiliar);
    return auxiliar;
}

    /** \brief suma dos números
     *
     * \param primer operando
     * \param segundo operando
     * \return retorna la suma de los parametros
     *
     */
float sumar(float x,float y)
 {
     float resultado;
    resultado=x+y;
    return resultado;
}

/** \brief Resta dos numeros
 *
 * \param primer operando
 * \param segundo operando
 * \return retorna la resta de los parametros
 *
 */
float restar(float x,float y)
 {
    float resultado;
    resultado=x-y;
    return resultado;
}

/** \brief multiplica dos numeros
 *
 * \param primer numero
 * \param segundo numero
 * \return retorna la multiplicación de los numeros
 *
 */

float multiplicar(float x,float y)
 {
    float resultado;
    resultado=x*y;
    return resultado;
}

/** \brief divide dos numeros
 *
 * \param primer numero
 * \param segundo numero
 * \return la división de dos numeros
 *
 */
float dividir(float x,float y)
 {
    float resultado;
    if(y!=0){
    resultado=x/y;
    return resultado;
}
    else{
        return 0.0;
    }
 }

 /** \brief Da el resultado de la factorial de un numero
  *
  * \param El numero a operar
  * \param
  * \return El factorial
  *
  */
int factorial(int x){
    int rta;

        if(x==1){
            rta=1;
        }
        else{
            rta=x*factorial(x-1);
        }
        return rta;
}



