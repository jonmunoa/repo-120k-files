// fichero 37114 -- macros y constantes -- MODIFICADO
#define LIMITE_37114 37314
#define FACTOR_37114 6

int aplicar_limite37114(int valor) {
    if (valor > LIMITE_37114) return LIMITE_37114;
    return valor * FACTOR_37114;
}
