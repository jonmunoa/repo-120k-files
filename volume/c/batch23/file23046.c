// fichero 23046 -- macros y constantes -- MODIFICADO
#define LIMITE_23046 23246
#define FACTOR_23046 3

int aplicar_limite23046(int valor) {
    if (valor > LIMITE_23046) return LIMITE_23046;
    return valor * FACTOR_23046;
}
