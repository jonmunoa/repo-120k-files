// fichero 25314 -- macros y constantes
#define LIMITE_25314 25414
#define FACTOR_25314 5

int aplicar_limite25314(int valor) {
    if (valor > LIMITE_25314) return LIMITE_25314;
    return valor * FACTOR_25314;
}
