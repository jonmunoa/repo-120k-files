// fichero 27078 -- macros y constantes -- MODIFICADO
#define LIMITE_27078 27278
#define FACTOR_27078 5

int aplicar_limite27078(int valor) {
    if (valor > LIMITE_27078) return LIMITE_27078;
    return valor * FACTOR_27078;
}
