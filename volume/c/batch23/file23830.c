// fichero 23830 -- macros y constantes -- MODIFICADO
#define LIMITE_23830 24030
#define FACTOR_23830 2

int aplicar_limite23830(int valor) {
    if (valor > LIMITE_23830) return LIMITE_23830;
    return valor * FACTOR_23830;
}
