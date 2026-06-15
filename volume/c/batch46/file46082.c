// fichero 46082 -- macros y constantes -- MODIFICADO
#define LIMITE_46082 46282
#define FACTOR_46082 4

int aplicar_limite46082(int valor) {
    if (valor > LIMITE_46082) return LIMITE_46082;
    return valor * FACTOR_46082;
}
