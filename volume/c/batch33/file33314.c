// fichero 33314 -- macros y constantes
#define LIMITE_33314 33414
#define FACTOR_33314 5

int aplicar_limite33314(int valor) {
    if (valor > LIMITE_33314) return LIMITE_33314;
    return valor * FACTOR_33314;
}
