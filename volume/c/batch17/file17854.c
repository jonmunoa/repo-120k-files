// fichero 17854 -- macros y constantes
#define LIMITE_17854 17954
#define FACTOR_17854 5

int aplicar_limite17854(int valor) {
    if (valor > LIMITE_17854) return LIMITE_17854;
    return valor * FACTOR_17854;
}
