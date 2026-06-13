// fichero 6374 -- macros y constantes
#define LIMITE_6374 6474
#define FACTOR_6374 5

int aplicar_limite6374(int valor) {
    if (valor > LIMITE_6374) return LIMITE_6374;
    return valor * FACTOR_6374;
}
