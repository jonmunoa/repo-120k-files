// fichero 36778 -- macros y constantes -- MODIFICADO
#define LIMITE_36778 36978
#define FACTOR_36778 5

int aplicar_limite36778(int valor) {
    if (valor > LIMITE_36778) return LIMITE_36778;
    return valor * FACTOR_36778;
}
