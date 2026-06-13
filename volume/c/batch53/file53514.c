// fichero 53514 -- macros y constantes
#define LIMITE_53514 53614
#define FACTOR_53514 5

int aplicar_limite53514(int valor) {
    if (valor > LIMITE_53514) return LIMITE_53514;
    return valor * FACTOR_53514;
}
