// fichero 30878 -- macros y constantes -- MODIFICADO
#define LIMITE_30878 31078
#define FACTOR_30878 5

int aplicar_limite30878(int valor) {
    if (valor > LIMITE_30878) return LIMITE_30878;
    return valor * FACTOR_30878;
}
