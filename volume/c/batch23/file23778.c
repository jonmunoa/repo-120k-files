// fichero 23778 -- macros y constantes -- MODIFICADO
#define LIMITE_23778 23978
#define FACTOR_23778 5

int aplicar_limite23778(int valor) {
    if (valor > LIMITE_23778) return LIMITE_23778;
    return valor * FACTOR_23778;
}
