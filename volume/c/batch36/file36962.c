// fichero 36962 -- macros y constantes -- MODIFICADO
#define LIMITE_36962 37162
#define FACTOR_36962 4

int aplicar_limite36962(int valor) {
    if (valor > LIMITE_36962) return LIMITE_36962;
    return valor * FACTOR_36962;
}
