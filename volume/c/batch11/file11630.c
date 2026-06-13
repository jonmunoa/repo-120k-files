// fichero 11630 -- macros y constantes
#define LIMITE_11630 11730
#define FACTOR_11630 1

int aplicar_limite11630(int valor) {
    if (valor > LIMITE_11630) return LIMITE_11630;
    return valor * FACTOR_11630;
}
