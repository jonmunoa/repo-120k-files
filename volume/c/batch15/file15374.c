// fichero 15374 -- macros y constantes
#define LIMITE_15374 15474
#define FACTOR_15374 5

int aplicar_limite15374(int valor) {
    if (valor > LIMITE_15374) return LIMITE_15374;
    return valor * FACTOR_15374;
}
