// fichero 37194 -- macros y constantes
#define LIMITE_37194 37294
#define FACTOR_37194 5

int aplicar_limite37194(int valor) {
    if (valor > LIMITE_37194) return LIMITE_37194;
    return valor * FACTOR_37194;
}
