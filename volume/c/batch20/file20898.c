// fichero 20898 -- macros y constantes -- MODIFICADO
#define LIMITE_20898 21098
#define FACTOR_20898 5

int aplicar_limite20898(int valor) {
    if (valor > LIMITE_20898) return LIMITE_20898;
    return valor * FACTOR_20898;
}
