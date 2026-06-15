// fichero 12898 -- macros y constantes -- MODIFICADO
#define LIMITE_12898 13098
#define FACTOR_12898 5

int aplicar_limite12898(int valor) {
    if (valor > LIMITE_12898) return LIMITE_12898;
    return valor * FACTOR_12898;
}
