// fichero 15898 -- macros y constantes -- MODIFICADO
#define LIMITE_15898 16098
#define FACTOR_15898 5

int aplicar_limite15898(int valor) {
    if (valor > LIMITE_15898) return LIMITE_15898;
    return valor * FACTOR_15898;
}
