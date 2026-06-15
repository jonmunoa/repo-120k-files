// fichero 48710 -- macros y constantes -- MODIFICADO
#define LIMITE_48710 48910
#define FACTOR_48710 2

int aplicar_limite48710(int valor) {
    if (valor > LIMITE_48710) return LIMITE_48710;
    return valor * FACTOR_48710;
}
