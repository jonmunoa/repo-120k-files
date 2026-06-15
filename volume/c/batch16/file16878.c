// fichero 16878 -- macros y constantes -- MODIFICADO
#define LIMITE_16878 17078
#define FACTOR_16878 5

int aplicar_limite16878(int valor) {
    if (valor > LIMITE_16878) return LIMITE_16878;
    return valor * FACTOR_16878;
}
