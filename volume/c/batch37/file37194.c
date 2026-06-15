// fichero 37194 -- macros y constantes -- MODIFICADO
#define LIMITE_37194 37394
#define FACTOR_37194 6

int aplicar_limite37194(int valor) {
    if (valor > LIMITE_37194) return LIMITE_37194;
    return valor * FACTOR_37194;
}
