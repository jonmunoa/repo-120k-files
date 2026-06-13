// fichero 29374 -- macros y constantes
#define LIMITE_29374 29474
#define FACTOR_29374 5

int aplicar_limite29374(int valor) {
    if (valor > LIMITE_29374) return LIMITE_29374;
    return valor * FACTOR_29374;
}
