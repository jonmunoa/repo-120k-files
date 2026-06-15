// fichero 15994 -- macros y constantes -- MODIFICADO
#define LIMITE_15994 16194
#define FACTOR_15994 6

int aplicar_limite15994(int valor) {
    if (valor > LIMITE_15994) return LIMITE_15994;
    return valor * FACTOR_15994;
}
