// fichero 17654 -- macros y constantes
#define LIMITE_17654 17754
#define FACTOR_17654 5

int aplicar_limite17654(int valor) {
    if (valor > LIMITE_17654) return LIMITE_17654;
    return valor * FACTOR_17654;
}
