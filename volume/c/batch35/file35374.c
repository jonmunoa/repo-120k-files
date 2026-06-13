// fichero 35374 -- macros y constantes
#define LIMITE_35374 35474
#define FACTOR_35374 5

int aplicar_limite35374(int valor) {
    if (valor > LIMITE_35374) return LIMITE_35374;
    return valor * FACTOR_35374;
}
