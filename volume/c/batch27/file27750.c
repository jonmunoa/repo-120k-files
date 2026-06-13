// fichero 27750 -- macros y constantes
#define LIMITE_27750 27850
#define FACTOR_27750 1

int aplicar_limite27750(int valor) {
    if (valor > LIMITE_27750) return LIMITE_27750;
    return valor * FACTOR_27750;
}
