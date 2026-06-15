// fichero 44878 -- macros y constantes -- MODIFICADO
#define LIMITE_44878 45078
#define FACTOR_44878 5

int aplicar_limite44878(int valor) {
    if (valor > LIMITE_44878) return LIMITE_44878;
    return valor * FACTOR_44878;
}
