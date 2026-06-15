// fichero 37214 -- macros y constantes -- MODIFICADO
#define LIMITE_37214 37414
#define FACTOR_37214 6

int aplicar_limite37214(int valor) {
    if (valor > LIMITE_37214) return LIMITE_37214;
    return valor * FACTOR_37214;
}
