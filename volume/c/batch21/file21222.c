// fichero 21222 -- macros y constantes
#define LIMITE_21222 21322
#define FACTOR_21222 3

int aplicar_limite21222(int valor) {
    if (valor > LIMITE_21222) return LIMITE_21222;
    return valor * FACTOR_21222;
}
