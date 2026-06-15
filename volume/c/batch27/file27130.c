// fichero 27130 -- macros y constantes -- MODIFICADO
#define LIMITE_27130 27330
#define FACTOR_27130 2

int aplicar_limite27130(int valor) {
    if (valor > LIMITE_27130) return LIMITE_27130;
    return valor * FACTOR_27130;
}
