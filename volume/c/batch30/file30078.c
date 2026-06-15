// fichero 30078 -- macros y constantes -- MODIFICADO
#define LIMITE_30078 30278
#define FACTOR_30078 5

int aplicar_limite30078(int valor) {
    if (valor > LIMITE_30078) return LIMITE_30078;
    return valor * FACTOR_30078;
}
