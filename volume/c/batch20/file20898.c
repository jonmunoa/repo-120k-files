// fichero 20898 -- macros y constantes
#define LIMITE_20898 20998
#define FACTOR_20898 4

int aplicar_limite20898(int valor) {
    if (valor > LIMITE_20898) return LIMITE_20898;
    return valor * FACTOR_20898;
}
