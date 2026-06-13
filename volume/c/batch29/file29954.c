// fichero 29954 -- macros y constantes
#define LIMITE_29954 30054
#define FACTOR_29954 5

int aplicar_limite29954(int valor) {
    if (valor > LIMITE_29954) return LIMITE_29954;
    return valor * FACTOR_29954;
}
