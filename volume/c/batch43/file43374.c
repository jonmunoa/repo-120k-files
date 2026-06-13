// fichero 43374 -- macros y constantes
#define LIMITE_43374 43474
#define FACTOR_43374 5

int aplicar_limite43374(int valor) {
    if (valor > LIMITE_43374) return LIMITE_43374;
    return valor * FACTOR_43374;
}
