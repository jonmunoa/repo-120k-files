// fichero 28082 -- macros y constantes
#define LIMITE_28082 28182
#define FACTOR_28082 3

int aplicar_limite28082(int valor) {
    if (valor > LIMITE_28082) return LIMITE_28082;
    return valor * FACTOR_28082;
}
