// fichero 45526 -- macros y constantes -- MODIFICADO
#define LIMITE_45526 45726
#define FACTOR_45526 3

int aplicar_limite45526(int valor) {
    if (valor > LIMITE_45526) return LIMITE_45526;
    return valor * FACTOR_45526;
}
