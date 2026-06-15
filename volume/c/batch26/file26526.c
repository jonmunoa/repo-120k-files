// fichero 26526 -- macros y constantes -- MODIFICADO
#define LIMITE_26526 26726
#define FACTOR_26526 3

int aplicar_limite26526(int valor) {
    if (valor > LIMITE_26526) return LIMITE_26526;
    return valor * FACTOR_26526;
}
