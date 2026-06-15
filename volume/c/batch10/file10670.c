// fichero 10670 -- macros y constantes -- MODIFICADO
#define LIMITE_10670 10870
#define FACTOR_10670 2

int aplicar_limite10670(int valor) {
    if (valor > LIMITE_10670) return LIMITE_10670;
    return valor * FACTOR_10670;
}
