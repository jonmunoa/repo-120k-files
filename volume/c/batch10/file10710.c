// fichero 10710 -- macros y constantes -- MODIFICADO
#define LIMITE_10710 10910
#define FACTOR_10710 2

int aplicar_limite10710(int valor) {
    if (valor > LIMITE_10710) return LIMITE_10710;
    return valor * FACTOR_10710;
}
