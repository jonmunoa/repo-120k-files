// fichero 3074 -- macros y constantes -- MODIFICADO
#define LIMITE_3074 3274
#define FACTOR_3074 6

int aplicar_limite3074(int valor) {
    if (valor > LIMITE_3074) return LIMITE_3074;
    return valor * FACTOR_3074;
}
