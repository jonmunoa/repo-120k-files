// fichero 27374 -- macros y constantes
#define LIMITE_27374 27474
#define FACTOR_27374 5

int aplicar_limite27374(int valor) {
    if (valor > LIMITE_27374) return LIMITE_27374;
    return valor * FACTOR_27374;
}
