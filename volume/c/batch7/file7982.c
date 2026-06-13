// fichero 7982 -- macros y constantes
#define LIMITE_7982 8082
#define FACTOR_7982 3

int aplicar_limite7982(int valor) {
    if (valor > LIMITE_7982) return LIMITE_7982;
    return valor * FACTOR_7982;
}
