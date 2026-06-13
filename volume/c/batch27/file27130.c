// fichero 27130 -- macros y constantes
#define LIMITE_27130 27230
#define FACTOR_27130 1

int aplicar_limite27130(int valor) {
    if (valor > LIMITE_27130) return LIMITE_27130;
    return valor * FACTOR_27130;
}
