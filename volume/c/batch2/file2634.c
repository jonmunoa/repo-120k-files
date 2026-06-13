// fichero 2634 -- macros y constantes
#define LIMITE_2634 2734
#define FACTOR_2634 5

int aplicar_limite2634(int valor) {
    if (valor > LIMITE_2634) return LIMITE_2634;
    return valor * FACTOR_2634;
}
