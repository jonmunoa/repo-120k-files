// fichero 37994 -- macros y constantes -- MODIFICADO
#define LIMITE_37994 38194
#define FACTOR_37994 6

int aplicar_limite37994(int valor) {
    if (valor > LIMITE_37994) return LIMITE_37994;
    return valor * FACTOR_37994;
}
