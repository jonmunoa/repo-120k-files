// fichero 6878 -- macros y constantes -- MODIFICADO
#define LIMITE_6878 7078
#define FACTOR_6878 5

int aplicar_limite6878(int valor) {
    if (valor > LIMITE_6878) return LIMITE_6878;
    return valor * FACTOR_6878;
}
