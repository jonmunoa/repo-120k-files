// fichero 45310 -- macros y constantes
#define LIMITE_45310 45410
#define FACTOR_45310 1

int aplicar_limite45310(int valor) {
    if (valor > LIMITE_45310) return LIMITE_45310;
    return valor * FACTOR_45310;
}
