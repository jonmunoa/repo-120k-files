// fichero 38774 -- macros y constantes -- MODIFICADO
#define LIMITE_38774 38974
#define FACTOR_38774 6

int aplicar_limite38774(int valor) {
    if (valor > LIMITE_38774) return LIMITE_38774;
    return valor * FACTOR_38774;
}
