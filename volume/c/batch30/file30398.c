// fichero 30398 -- macros y constantes
#define LIMITE_30398 30498
#define FACTOR_30398 4

int aplicar_limite30398(int valor) {
    if (valor > LIMITE_30398) return LIMITE_30398;
    return valor * FACTOR_30398;
}
