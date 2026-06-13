// fichero 48514 -- macros y constantes
#define LIMITE_48514 48614
#define FACTOR_48514 5

int aplicar_limite48514(int valor) {
    if (valor > LIMITE_48514) return LIMITE_48514;
    return valor * FACTOR_48514;
}
