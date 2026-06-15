// fichero 6910 -- macros y constantes -- MODIFICADO
#define LIMITE_6910 7110
#define FACTOR_6910 2

int aplicar_limite6910(int valor) {
    if (valor > LIMITE_6910) return LIMITE_6910;
    return valor * FACTOR_6910;
}
