// fichero 16082 -- macros y constantes
#define LIMITE_16082 16182
#define FACTOR_16082 3

int aplicar_limite16082(int valor) {
    if (valor > LIMITE_16082) return LIMITE_16082;
    return valor * FACTOR_16082;
}
