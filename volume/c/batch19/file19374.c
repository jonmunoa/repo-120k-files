// fichero 19374 -- macros y constantes
#define LIMITE_19374 19474
#define FACTOR_19374 5

int aplicar_limite19374(int valor) {
    if (valor > LIMITE_19374) return LIMITE_19374;
    return valor * FACTOR_19374;
}
