// fichero 46146 -- macros y constantes
#define LIMITE_46146 46246
#define FACTOR_46146 2

int aplicar_limite46146(int valor) {
    if (valor > LIMITE_46146) return LIMITE_46146;
    return valor * FACTOR_46146;
}
