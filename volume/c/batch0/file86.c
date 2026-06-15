// fichero 86 -- macros y constantes -- MODIFICADO
#define LIMITE_86 286
#define FACTOR_86 3

int aplicar_limite86(int valor) {
    if (valor > LIMITE_86) return LIMITE_86;
    return valor * FACTOR_86;
}
