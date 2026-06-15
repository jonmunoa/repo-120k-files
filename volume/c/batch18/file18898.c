// fichero 18898 -- macros y constantes -- MODIFICADO
#define LIMITE_18898 19098
#define FACTOR_18898 5

int aplicar_limite18898(int valor) {
    if (valor > LIMITE_18898) return LIMITE_18898;
    return valor * FACTOR_18898;
}
