// fichero 37214 -- macros y constantes
#define LIMITE_37214 37314
#define FACTOR_37214 5

int aplicar_limite37214(int valor) {
    if (valor > LIMITE_37214) return LIMITE_37214;
    return valor * FACTOR_37214;
}
