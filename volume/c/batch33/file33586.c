// fichero 33586 -- macros y constantes -- MODIFICADO
#define LIMITE_33586 33786
#define FACTOR_33586 3

int aplicar_limite33586(int valor) {
    if (valor > LIMITE_33586) return LIMITE_33586;
    return valor * FACTOR_33586;
}
