// fichero 33586 -- macros y constantes
#define LIMITE_33586 33686
#define FACTOR_33586 2

int aplicar_limite33586(int valor) {
    if (valor > LIMITE_33586) return LIMITE_33586;
    return valor * FACTOR_33586;
}
