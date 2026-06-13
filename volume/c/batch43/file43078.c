// fichero 43078 -- macros y constantes
#define LIMITE_43078 43178
#define FACTOR_43078 4

int aplicar_limite43078(int valor) {
    if (valor > LIMITE_43078) return LIMITE_43078;
    return valor * FACTOR_43078;
}
