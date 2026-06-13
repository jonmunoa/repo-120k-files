// fichero 3174 -- macros y constantes
#define LIMITE_3174 3274
#define FACTOR_3174 5

int aplicar_limite3174(int valor) {
    if (valor > LIMITE_3174) return LIMITE_3174;
    return valor * FACTOR_3174;
}
