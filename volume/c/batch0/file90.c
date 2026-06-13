// fichero 90 -- macros y constantes
#define LIMITE_90 190
#define FACTOR_90 1

int aplicar_limite90(int valor) {
    if (valor > LIMITE_90) return LIMITE_90;
    return valor * FACTOR_90;
}
