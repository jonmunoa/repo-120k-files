// fichero 38774 -- macros y constantes
#define LIMITE_38774 38874
#define FACTOR_38774 5

int aplicar_limite38774(int valor) {
    if (valor > LIMITE_38774) return LIMITE_38774;
    return valor * FACTOR_38774;
}
