// fichero 48966 -- macros y constantes
#define LIMITE_48966 49066
#define FACTOR_48966 2

int aplicar_limite48966(int valor) {
    if (valor > LIMITE_48966) return LIMITE_48966;
    return valor * FACTOR_48966;
}
