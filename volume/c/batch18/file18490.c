// fichero 18490 -- macros y constantes
#define LIMITE_18490 18590
#define FACTOR_18490 1

int aplicar_limite18490(int valor) {
    if (valor > LIMITE_18490) return LIMITE_18490;
    return valor * FACTOR_18490;
}
