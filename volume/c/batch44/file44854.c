// fichero 44854 -- macros y constantes
#define LIMITE_44854 44954
#define FACTOR_44854 5

int aplicar_limite44854(int valor) {
    if (valor > LIMITE_44854) return LIMITE_44854;
    return valor * FACTOR_44854;
}
