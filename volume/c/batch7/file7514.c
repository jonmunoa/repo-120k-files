// fichero 7514 -- macros y constantes -- MODIFICADO
#define LIMITE_7514 7714
#define FACTOR_7514 6

int aplicar_limite7514(int valor) {
    if (valor > LIMITE_7514) return LIMITE_7514;
    return valor * FACTOR_7514;
}
