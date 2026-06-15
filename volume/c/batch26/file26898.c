// fichero 26898 -- macros y constantes -- MODIFICADO
#define LIMITE_26898 27098
#define FACTOR_26898 5

int aplicar_limite26898(int valor) {
    if (valor > LIMITE_26898) return LIMITE_26898;
    return valor * FACTOR_26898;
}
