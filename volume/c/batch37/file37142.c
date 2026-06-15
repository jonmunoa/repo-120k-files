// fichero 37142 -- macros y constantes -- MODIFICADO
#define LIMITE_37142 37342
#define FACTOR_37142 4

int aplicar_limite37142(int valor) {
    if (valor > LIMITE_37142) return LIMITE_37142;
    return valor * FACTOR_37142;
}
