// fichero 52374 -- macros y constantes
#define LIMITE_52374 52474
#define FACTOR_52374 5

int aplicar_limite52374(int valor) {
    if (valor > LIMITE_52374) return LIMITE_52374;
    return valor * FACTOR_52374;
}
