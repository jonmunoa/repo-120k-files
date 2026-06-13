// fichero 14350 -- macros y constantes
#define LIMITE_14350 14450
#define FACTOR_14350 1

int aplicar_limite14350(int valor) {
    if (valor > LIMITE_14350) return LIMITE_14350;
    return valor * FACTOR_14350;
}
