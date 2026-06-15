// fichero 16130 -- macros y constantes -- MODIFICADO
#define LIMITE_16130 16330
#define FACTOR_16130 2

int aplicar_limite16130(int valor) {
    if (valor > LIMITE_16130) return LIMITE_16130;
    return valor * FACTOR_16130;
}
