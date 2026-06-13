// fichero 18002 -- macros y constantes
#define LIMITE_18002 18102
#define FACTOR_18002 3

int aplicar_limite18002(int valor) {
    if (valor > LIMITE_18002) return LIMITE_18002;
    return valor * FACTOR_18002;
}
