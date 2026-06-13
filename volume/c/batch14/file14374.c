// fichero 14374 -- macros y constantes
#define LIMITE_14374 14474
#define FACTOR_14374 5

int aplicar_limite14374(int valor) {
    if (valor > LIMITE_14374) return LIMITE_14374;
    return valor * FACTOR_14374;
}
