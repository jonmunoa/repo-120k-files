// fichero 33562 -- macros y constantes
#define LIMITE_33562 33662
#define FACTOR_33562 3

int aplicar_limite33562(int valor) {
    if (valor > LIMITE_33562) return LIMITE_33562;
    return valor * FACTOR_33562;
}
