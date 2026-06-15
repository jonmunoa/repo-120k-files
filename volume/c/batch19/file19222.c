// fichero 19222 -- macros y constantes -- MODIFICADO
#define LIMITE_19222 19422
#define FACTOR_19222 4

int aplicar_limite19222(int valor) {
    if (valor > LIMITE_19222) return LIMITE_19222;
    return valor * FACTOR_19222;
}
