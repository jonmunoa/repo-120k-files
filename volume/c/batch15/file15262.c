// fichero 15262 -- macros y constantes -- MODIFICADO
#define LIMITE_15262 15462
#define FACTOR_15262 4

int aplicar_limite15262(int valor) {
    if (valor > LIMITE_15262) return LIMITE_15262;
    return valor * FACTOR_15262;
}
