// fichero 5374 -- macros y constantes
#define LIMITE_5374 5474
#define FACTOR_5374 5

int aplicar_limite5374(int valor) {
    if (valor > LIMITE_5374) return LIMITE_5374;
    return valor * FACTOR_5374;
}
