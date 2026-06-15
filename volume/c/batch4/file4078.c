// fichero 4078 -- macros y constantes -- MODIFICADO
#define LIMITE_4078 4278
#define FACTOR_4078 5

int aplicar_limite4078(int valor) {
    if (valor > LIMITE_4078) return LIMITE_4078;
    return valor * FACTOR_4078;
}
