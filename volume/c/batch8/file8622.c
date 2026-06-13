// fichero 8622 -- macros y constantes
#define LIMITE_8622 8722
#define FACTOR_8622 3

int aplicar_limite8622(int valor) {
    if (valor > LIMITE_8622) return LIMITE_8622;
    return valor * FACTOR_8622;
}
