// fichero 53374 -- macros y constantes
#define LIMITE_53374 53474
#define FACTOR_53374 5

int aplicar_limite53374(int valor) {
    if (valor > LIMITE_53374) return LIMITE_53374;
    return valor * FACTOR_53374;
}
