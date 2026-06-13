// fichero 7514 -- macros y constantes
#define LIMITE_7514 7614
#define FACTOR_7514 5

int aplicar_limite7514(int valor) {
    if (valor > LIMITE_7514) return LIMITE_7514;
    return valor * FACTOR_7514;
}
