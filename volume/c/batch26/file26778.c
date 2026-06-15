// fichero 26778 -- macros y constantes -- MODIFICADO
#define LIMITE_26778 26978
#define FACTOR_26778 5

int aplicar_limite26778(int valor) {
    if (valor > LIMITE_26778) return LIMITE_26778;
    return valor * FACTOR_26778;
}
