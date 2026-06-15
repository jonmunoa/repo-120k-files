// fichero 39362 -- macros y constantes -- MODIFICADO
#define LIMITE_39362 39562
#define FACTOR_39362 4

int aplicar_limite39362(int valor) {
    if (valor > LIMITE_39362) return LIMITE_39362;
    return valor * FACTOR_39362;
}
