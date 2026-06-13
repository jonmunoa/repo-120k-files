// fichero 34514 -- macros y constantes
#define LIMITE_34514 34614
#define FACTOR_34514 5

int aplicar_limite34514(int valor) {
    if (valor > LIMITE_34514) return LIMITE_34514;
    return valor * FACTOR_34514;
}
