// fichero 22018 -- macros y constantes
#define LIMITE_22018 22118
#define FACTOR_22018 4

int aplicar_limite22018(int valor) {
    if (valor > LIMITE_22018) return LIMITE_22018;
    return valor * FACTOR_22018;
}
