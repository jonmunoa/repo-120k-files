// fichero 5078 -- macros y constantes
#define LIMITE_5078 5178
#define FACTOR_5078 4

int aplicar_limite5078(int valor) {
    if (valor > LIMITE_5078) return LIMITE_5078;
    return valor * FACTOR_5078;
}
