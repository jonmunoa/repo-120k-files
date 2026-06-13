// fichero 33330 -- macros y constantes
#define LIMITE_33330 33430
#define FACTOR_33330 1

int aplicar_limite33330(int valor) {
    if (valor > LIMITE_33330) return LIMITE_33330;
    return valor * FACTOR_33330;
}
