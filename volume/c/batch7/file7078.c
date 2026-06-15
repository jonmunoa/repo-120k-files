// fichero 7078 -- macros y constantes -- MODIFICADO
#define LIMITE_7078 7278
#define FACTOR_7078 5

int aplicar_limite7078(int valor) {
    if (valor > LIMITE_7078) return LIMITE_7078;
    return valor * FACTOR_7078;
}
