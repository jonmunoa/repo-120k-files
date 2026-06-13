// fichero 12902 -- macros y constantes
#define LIMITE_12902 13002
#define FACTOR_12902 3

int aplicar_limite12902(int valor) {
    if (valor > LIMITE_12902) return LIMITE_12902;
    return valor * FACTOR_12902;
}
