// fichero 39690 -- macros y constantes -- MODIFICADO
#define LIMITE_39690 39890
#define FACTOR_39690 2

int aplicar_limite39690(int valor) {
    if (valor > LIMITE_39690) return LIMITE_39690;
    return valor * FACTOR_39690;
}
