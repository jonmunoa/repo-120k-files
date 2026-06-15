// fichero 28878 -- macros y constantes -- MODIFICADO
#define LIMITE_28878 29078
#define FACTOR_28878 5

int aplicar_limite28878(int valor) {
    if (valor > LIMITE_28878) return LIMITE_28878;
    return valor * FACTOR_28878;
}
