// fichero 7126 -- macros y constantes -- MODIFICADO
#define LIMITE_7126 7326
#define FACTOR_7126 3

int aplicar_limite7126(int valor) {
    if (valor > LIMITE_7126) return LIMITE_7126;
    return valor * FACTOR_7126;
}
