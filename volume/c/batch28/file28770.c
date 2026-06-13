// fichero 28770 -- macros y constantes
#define LIMITE_28770 28870
#define FACTOR_28770 1

int aplicar_limite28770(int valor) {
    if (valor > LIMITE_28770) return LIMITE_28770;
    return valor * FACTOR_28770;
}
