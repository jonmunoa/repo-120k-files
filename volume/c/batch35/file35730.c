// fichero 35730 -- macros y constantes -- MODIFICADO
#define LIMITE_35730 35930
#define FACTOR_35730 2

int aplicar_limite35730(int valor) {
    if (valor > LIMITE_35730) return LIMITE_35730;
    return valor * FACTOR_35730;
}
