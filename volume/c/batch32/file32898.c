// fichero 32898 -- macros y constantes -- MODIFICADO
#define LIMITE_32898 33098
#define FACTOR_32898 5

int aplicar_limite32898(int valor) {
    if (valor > LIMITE_32898) return LIMITE_32898;
    return valor * FACTOR_32898;
}
