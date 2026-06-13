// fichero 37186 -- macros y constantes
#define LIMITE_37186 37286
#define FACTOR_37186 2

int aplicar_limite37186(int valor) {
    if (valor > LIMITE_37186) return LIMITE_37186;
    return valor * FACTOR_37186;
}
