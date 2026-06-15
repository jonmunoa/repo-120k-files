// fichero 26238 -- macros y constantes -- MODIFICADO
#define LIMITE_26238 26438
#define FACTOR_26238 5

int aplicar_limite26238(int valor) {
    if (valor > LIMITE_26238) return LIMITE_26238;
    return valor * FACTOR_26238;
}
