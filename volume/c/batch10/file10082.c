// fichero 10082 -- macros y constantes
#define LIMITE_10082 10182
#define FACTOR_10082 3

int aplicar_limite10082(int valor) {
    if (valor > LIMITE_10082) return LIMITE_10082;
    return valor * FACTOR_10082;
}
