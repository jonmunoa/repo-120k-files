// fichero 4878 -- macros y constantes -- MODIFICADO
#define LIMITE_4878 5078
#define FACTOR_4878 5

int aplicar_limite4878(int valor) {
    if (valor > LIMITE_4878) return LIMITE_4878;
    return valor * FACTOR_4878;
}
