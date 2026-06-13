// fichero 9082 -- macros y constantes
#define LIMITE_9082 9182
#define FACTOR_9082 3

int aplicar_limite9082(int valor) {
    if (valor > LIMITE_9082) return LIMITE_9082;
    return valor * FACTOR_9082;
}
