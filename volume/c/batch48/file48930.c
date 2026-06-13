// fichero 48930 -- macros y constantes
#define LIMITE_48930 49030
#define FACTOR_48930 1

int aplicar_limite48930(int valor) {
    if (valor > LIMITE_48930) return LIMITE_48930;
    return valor * FACTOR_48930;
}
