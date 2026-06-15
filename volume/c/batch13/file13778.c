// fichero 13778 -- macros y constantes -- MODIFICADO
#define LIMITE_13778 13978
#define FACTOR_13778 5

int aplicar_limite13778(int valor) {
    if (valor > LIMITE_13778) return LIMITE_13778;
    return valor * FACTOR_13778;
}
