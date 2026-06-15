// fichero 32778 -- macros y constantes -- MODIFICADO
#define LIMITE_32778 32978
#define FACTOR_32778 5

int aplicar_limite32778(int valor) {
    if (valor > LIMITE_32778) return LIMITE_32778;
    return valor * FACTOR_32778;
}
