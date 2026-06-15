// fichero 22046 -- macros y constantes -- MODIFICADO
#define LIMITE_22046 22246
#define FACTOR_22046 3

int aplicar_limite22046(int valor) {
    if (valor > LIMITE_22046) return LIMITE_22046;
    return valor * FACTOR_22046;
}
