// fichero 52130 -- macros y constantes
#define LIMITE_52130 52230
#define FACTOR_52130 1

int aplicar_limite52130(int valor) {
    if (valor > LIMITE_52130) return LIMITE_52130;
    return valor * FACTOR_52130;
}
