// fichero 20854 -- macros y constantes
#define LIMITE_20854 20954
#define FACTOR_20854 5

int aplicar_limite20854(int valor) {
    if (valor > LIMITE_20854) return LIMITE_20854;
    return valor * FACTOR_20854;
}
