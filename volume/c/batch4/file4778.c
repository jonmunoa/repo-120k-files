// fichero 4778 -- macros y constantes -- MODIFICADO
#define LIMITE_4778 4978
#define FACTOR_4778 5

int aplicar_limite4778(int valor) {
    if (valor > LIMITE_4778) return LIMITE_4778;
    return valor * FACTOR_4778;
}
