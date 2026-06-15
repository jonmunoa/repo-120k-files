// fichero 4074 -- macros y constantes -- MODIFICADO
#define LIMITE_4074 4274
#define FACTOR_4074 6

int aplicar_limite4074(int valor) {
    if (valor > LIMITE_4074) return LIMITE_4074;
    return valor * FACTOR_4074;
}
