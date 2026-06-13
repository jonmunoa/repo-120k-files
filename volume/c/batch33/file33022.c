// fichero 33022 -- macros y constantes
#define LIMITE_33022 33122
#define FACTOR_33022 3

int aplicar_limite33022(int valor) {
    if (valor > LIMITE_33022) return LIMITE_33022;
    return valor * FACTOR_33022;
}
