// fichero 36878 -- macros y constantes -- MODIFICADO
#define LIMITE_36878 37078
#define FACTOR_36878 5

int aplicar_limite36878(int valor) {
    if (valor > LIMITE_36878) return LIMITE_36878;
    return valor * FACTOR_36878;
}
