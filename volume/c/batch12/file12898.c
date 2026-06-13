// fichero 12898 -- macros y constantes
#define LIMITE_12898 12998
#define FACTOR_12898 4

int aplicar_limite12898(int valor) {
    if (valor > LIMITE_12898) return LIMITE_12898;
    return valor * FACTOR_12898;
}
