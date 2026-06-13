// fichero 8374 -- macros y constantes
#define LIMITE_8374 8474
#define FACTOR_8374 5

int aplicar_limite8374(int valor) {
    if (valor > LIMITE_8374) return LIMITE_8374;
    return valor * FACTOR_8374;
}
