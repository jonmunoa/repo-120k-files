// fichero 6526 -- macros y constantes -- MODIFICADO
#define LIMITE_6526 6726
#define FACTOR_6526 3

int aplicar_limite6526(int valor) {
    if (valor > LIMITE_6526) return LIMITE_6526;
    return valor * FACTOR_6526;
}
