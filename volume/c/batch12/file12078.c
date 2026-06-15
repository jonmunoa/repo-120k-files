// fichero 12078 -- macros y constantes -- MODIFICADO
#define LIMITE_12078 12278
#define FACTOR_12078 5

int aplicar_limite12078(int valor) {
    if (valor > LIMITE_12078) return LIMITE_12078;
    return valor * FACTOR_12078;
}
