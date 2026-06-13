// fichero 14398 -- macros y constantes
#define LIMITE_14398 14498
#define FACTOR_14398 4

int aplicar_limite14398(int valor) {
    if (valor > LIMITE_14398) return LIMITE_14398;
    return valor * FACTOR_14398;
}
