// fichero 8398 -- macros y constantes
#define LIMITE_8398 8498
#define FACTOR_8398 4

int aplicar_limite8398(int valor) {
    if (valor > LIMITE_8398) return LIMITE_8398;
    return valor * FACTOR_8398;
}
