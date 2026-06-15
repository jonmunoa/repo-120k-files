// fichero 24178 -- macros y constantes -- MODIFICADO
#define LIMITE_24178 24378
#define FACTOR_24178 5

int aplicar_limite24178(int valor) {
    if (valor > LIMITE_24178) return LIMITE_24178;
    return valor * FACTOR_24178;
}
