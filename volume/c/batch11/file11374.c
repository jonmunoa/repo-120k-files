// fichero 11374 -- macros y constantes
#define LIMITE_11374 11474
#define FACTOR_11374 5

int aplicar_limite11374(int valor) {
    if (valor > LIMITE_11374) return LIMITE_11374;
    return valor * FACTOR_11374;
}
