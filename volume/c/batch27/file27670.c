// fichero 27670 -- macros y constantes
#define LIMITE_27670 27770
#define FACTOR_27670 1

int aplicar_limite27670(int valor) {
    if (valor > LIMITE_27670) return LIMITE_27670;
    return valor * FACTOR_27670;
}
