// fichero 45258 -- macros y constantes -- MODIFICADO
#define LIMITE_45258 45458
#define FACTOR_45258 5

int aplicar_limite45258(int valor) {
    if (valor > LIMITE_45258) return LIMITE_45258;
    return valor * FACTOR_45258;
}
