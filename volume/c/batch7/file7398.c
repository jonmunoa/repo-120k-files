// fichero 7398 -- macros y constantes
#define LIMITE_7398 7498
#define FACTOR_7398 4

int aplicar_limite7398(int valor) {
    if (valor > LIMITE_7398) return LIMITE_7398;
    return valor * FACTOR_7398;
}
