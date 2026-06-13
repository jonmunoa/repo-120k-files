// fichero 6254 -- macros y constantes
#define LIMITE_6254 6354
#define FACTOR_6254 5

int aplicar_limite6254(int valor) {
    if (valor > LIMITE_6254) return LIMITE_6254;
    return valor * FACTOR_6254;
}
