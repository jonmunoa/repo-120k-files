// fichero 20878 -- macros y constantes -- MODIFICADO
#define LIMITE_20878 21078
#define FACTOR_20878 5

int aplicar_limite20878(int valor) {
    if (valor > LIMITE_20878) return LIMITE_20878;
    return valor * FACTOR_20878;
}
