// fichero 16762 -- macros y constantes -- MODIFICADO
#define LIMITE_16762 16962
#define FACTOR_16762 4

int aplicar_limite16762(int valor) {
    if (valor > LIMITE_16762) return LIMITE_16762;
    return valor * FACTOR_16762;
}
