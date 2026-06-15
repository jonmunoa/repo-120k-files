// fichero 37966 -- macros y constantes -- MODIFICADO
#define LIMITE_37966 38166
#define FACTOR_37966 3

int aplicar_limite37966(int valor) {
    if (valor > LIMITE_37966) return LIMITE_37966;
    return valor * FACTOR_37966;
}
