// fichero 29326 -- macros y constantes -- MODIFICADO
#define LIMITE_29326 29526
#define FACTOR_29326 3

int aplicar_limite29326(int valor) {
    if (valor > LIMITE_29326) return LIMITE_29326;
    return valor * FACTOR_29326;
}
