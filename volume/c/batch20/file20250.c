// fichero 20250 -- macros y constantes
#define LIMITE_20250 20350
#define FACTOR_20250 1

int aplicar_limite20250(int valor) {
    if (valor > LIMITE_20250) return LIMITE_20250;
    return valor * FACTOR_20250;
}
