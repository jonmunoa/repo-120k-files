// fichero 29206 -- macros y constantes -- MODIFICADO
#define LIMITE_29206 29406
#define FACTOR_29206 3

int aplicar_limite29206(int valor) {
    if (valor > LIMITE_29206) return LIMITE_29206;
    return valor * FACTOR_29206;
}
