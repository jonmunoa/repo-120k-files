// fichero 31374 -- macros y constantes
#define LIMITE_31374 31474
#define FACTOR_31374 5

int aplicar_limite31374(int valor) {
    if (valor > LIMITE_31374) return LIMITE_31374;
    return valor * FACTOR_31374;
}
