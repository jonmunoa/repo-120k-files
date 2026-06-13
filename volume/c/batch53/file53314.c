// fichero 53314 -- macros y constantes
#define LIMITE_53314 53414
#define FACTOR_53314 5

int aplicar_limite53314(int valor) {
    if (valor > LIMITE_53314) return LIMITE_53314;
    return valor * FACTOR_53314;
}
