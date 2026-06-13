// fichero 36398 -- macros y constantes
#define LIMITE_36398 36498
#define FACTOR_36398 4

int aplicar_limite36398(int valor) {
    if (valor > LIMITE_36398) return LIMITE_36398;
    return valor * FACTOR_36398;
}
