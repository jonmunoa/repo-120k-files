// fichero 30814 -- macros y constantes -- MODIFICADO
#define LIMITE_30814 31014
#define FACTOR_30814 6

int aplicar_limite30814(int valor) {
    if (valor > LIMITE_30814) return LIMITE_30814;
    return valor * FACTOR_30814;
}
