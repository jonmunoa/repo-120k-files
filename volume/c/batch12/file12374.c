// fichero 12374 -- macros y constantes
#define LIMITE_12374 12474
#define FACTOR_12374 5

int aplicar_limite12374(int valor) {
    if (valor > LIMITE_12374) return LIMITE_12374;
    return valor * FACTOR_12374;
}
