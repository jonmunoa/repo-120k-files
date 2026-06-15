// fichero 14898 -- macros y constantes -- MODIFICADO
#define LIMITE_14898 15098
#define FACTOR_14898 5

int aplicar_limite14898(int valor) {
    if (valor > LIMITE_14898) return LIMITE_14898;
    return valor * FACTOR_14898;
}
