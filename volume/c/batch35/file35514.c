// fichero 35514 -- macros y constantes
#define LIMITE_35514 35614
#define FACTOR_35514 5

int aplicar_limite35514(int valor) {
    if (valor > LIMITE_35514) return LIMITE_35514;
    return valor * FACTOR_35514;
}
