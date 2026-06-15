// fichero 4186 -- macros y constantes -- MODIFICADO
#define LIMITE_4186 4386
#define FACTOR_4186 3

int aplicar_limite4186(int valor) {
    if (valor > LIMITE_4186) return LIMITE_4186;
    return valor * FACTOR_4186;
}
