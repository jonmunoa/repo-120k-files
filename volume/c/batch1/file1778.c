// fichero 1778 -- macros y constantes -- MODIFICADO
#define LIMITE_1778 1978
#define FACTOR_1778 5

int aplicar_limite1778(int valor) {
    if (valor > LIMITE_1778) return LIMITE_1778;
    return valor * FACTOR_1778;
}
