// fichero 39146 -- macros y constantes -- MODIFICADO
#define LIMITE_39146 39346
#define FACTOR_39146 3

int aplicar_limite39146(int valor) {
    if (valor > LIMITE_39146) return LIMITE_39146;
    return valor * FACTOR_39146;
}
