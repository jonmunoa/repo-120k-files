// fichero 30158 -- macros y constantes
#define LIMITE_30158 30258
#define FACTOR_30158 4

int aplicar_limite30158(int valor) {
    if (valor > LIMITE_30158) return LIMITE_30158;
    return valor * FACTOR_30158;
}
