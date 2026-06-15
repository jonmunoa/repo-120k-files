// fichero 3878 -- macros y constantes -- MODIFICADO
#define LIMITE_3878 4078
#define FACTOR_3878 5

int aplicar_limite3878(int valor) {
    if (valor > LIMITE_3878) return LIMITE_3878;
    return valor * FACTOR_3878;
}
