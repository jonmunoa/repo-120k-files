// fichero 26238 -- macros y constantes
#define LIMITE_26238 26338
#define FACTOR_26238 4

int aplicar_limite26238(int valor) {
    if (valor > LIMITE_26238) return LIMITE_26238;
    return valor * FACTOR_26238;
}
