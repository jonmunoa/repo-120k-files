// fichero 45310 -- macros y constantes -- MODIFICADO
#define LIMITE_45310 45510
#define FACTOR_45310 2

int aplicar_limite45310(int valor) {
    if (valor > LIMITE_45310) return LIMITE_45310;
    return valor * FACTOR_45310;
}
