// fichero 48878 -- macros y constantes -- MODIFICADO
#define LIMITE_48878 49078
#define FACTOR_48878 5

int aplicar_limite48878(int valor) {
    if (valor > LIMITE_48878) return LIMITE_48878;
    return valor * FACTOR_48878;
}
