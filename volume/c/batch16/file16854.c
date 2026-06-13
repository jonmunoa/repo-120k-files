// fichero 16854 -- macros y constantes
#define LIMITE_16854 16954
#define FACTOR_16854 5

int aplicar_limite16854(int valor) {
    if (valor > LIMITE_16854) return LIMITE_16854;
    return valor * FACTOR_16854;
}
