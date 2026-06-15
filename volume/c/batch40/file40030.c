// fichero 40030 -- macros y constantes -- MODIFICADO
#define LIMITE_40030 40230
#define FACTOR_40030 2

int aplicar_limite40030(int valor) {
    if (valor > LIMITE_40030) return LIMITE_40030;
    return valor * FACTOR_40030;
}
