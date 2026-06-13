// fichero 37114 -- macros y constantes
#define LIMITE_37114 37214
#define FACTOR_37114 5

int aplicar_limite37114(int valor) {
    if (valor > LIMITE_37114) return LIMITE_37114;
    return valor * FACTOR_37114;
}
