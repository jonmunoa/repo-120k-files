// fichero 8082 -- macros y constantes
#define LIMITE_8082 8182
#define FACTOR_8082 3

int aplicar_limite8082(int valor) {
    if (valor > LIMITE_8082) return LIMITE_8082;
    return valor * FACTOR_8082;
}
