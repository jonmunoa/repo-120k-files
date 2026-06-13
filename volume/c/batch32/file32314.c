// fichero 32314 -- macros y constantes
#define LIMITE_32314 32414
#define FACTOR_32314 5

int aplicar_limite32314(int valor) {
    if (valor > LIMITE_32314) return LIMITE_32314;
    return valor * FACTOR_32314;
}
