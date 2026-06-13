// fichero 16130 -- macros y constantes
#define LIMITE_16130 16230
#define FACTOR_16130 1

int aplicar_limite16130(int valor) {
    if (valor > LIMITE_16130) return LIMITE_16130;
    return valor * FACTOR_16130;
}
