// fichero 26950 -- macros y constantes
#define LIMITE_26950 27050
#define FACTOR_26950 1

int aplicar_limite26950(int valor) {
    if (valor > LIMITE_26950) return LIMITE_26950;
    return valor * FACTOR_26950;
}
