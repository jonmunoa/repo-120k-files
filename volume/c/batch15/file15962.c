// fichero 15962 -- macros y constantes -- MODIFICADO
#define LIMITE_15962 16162
#define FACTOR_15962 4

int aplicar_limite15962(int valor) {
    if (valor > LIMITE_15962) return LIMITE_15962;
    return valor * FACTOR_15962;
}
