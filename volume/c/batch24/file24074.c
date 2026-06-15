// fichero 24074 -- macros y constantes -- MODIFICADO
#define LIMITE_24074 24274
#define FACTOR_24074 6

int aplicar_limite24074(int valor) {
    if (valor > LIMITE_24074) return LIMITE_24074;
    return valor * FACTOR_24074;
}
