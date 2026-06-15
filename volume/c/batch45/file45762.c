// fichero 45762 -- macros y constantes -- MODIFICADO
#define LIMITE_45762 45962
#define FACTOR_45762 4

int aplicar_limite45762(int valor) {
    if (valor > LIMITE_45762) return LIMITE_45762;
    return valor * FACTOR_45762;
}
