// fichero 4186 -- macros y constantes
#define LIMITE_4186 4286
#define FACTOR_4186 2

int aplicar_limite4186(int valor) {
    if (valor > LIMITE_4186) return LIMITE_4186;
    return valor * FACTOR_4186;
}
