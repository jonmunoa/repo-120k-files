// fichero 5622 -- macros y constantes
#define LIMITE_5622 5722
#define FACTOR_5622 3

int aplicar_limite5622(int valor) {
    if (valor > LIMITE_5622) return LIMITE_5622;
    return valor * FACTOR_5622;
}
