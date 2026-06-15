// fichero 39082 -- macros y constantes -- MODIFICADO
#define LIMITE_39082 39282
#define FACTOR_39082 4

int aplicar_limite39082(int valor) {
    if (valor > LIMITE_39082) return LIMITE_39082;
    return valor * FACTOR_39082;
}
