// fichero 38178 -- macros y constantes -- MODIFICADO
#define LIMITE_38178 38378
#define FACTOR_38178 5

int aplicar_limite38178(int valor) {
    if (valor > LIMITE_38178) return LIMITE_38178;
    return valor * FACTOR_38178;
}
