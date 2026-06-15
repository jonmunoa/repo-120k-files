// fichero 19878 -- macros y constantes -- MODIFICADO
#define LIMITE_19878 20078
#define FACTOR_19878 5

int aplicar_limite19878(int valor) {
    if (valor > LIMITE_19878) return LIMITE_19878;
    return valor * FACTOR_19878;
}
