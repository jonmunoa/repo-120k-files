// fichero 46146 -- macros y constantes -- MODIFICADO
#define LIMITE_46146 46346
#define FACTOR_46146 3

int aplicar_limite46146(int valor) {
    if (valor > LIMITE_46146) return LIMITE_46146;
    return valor * FACTOR_46146;
}
