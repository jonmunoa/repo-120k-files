// fichero 27078 -- macros y constantes
#define LIMITE_27078 27178
#define FACTOR_27078 4

int aplicar_limite27078(int valor) {
    if (valor > LIMITE_27078) return LIMITE_27078;
    return valor * FACTOR_27078;
}
