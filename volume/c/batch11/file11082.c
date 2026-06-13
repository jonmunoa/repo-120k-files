// fichero 11082 -- macros y constantes
#define LIMITE_11082 11182
#define FACTOR_11082 3

int aplicar_limite11082(int valor) {
    if (valor > LIMITE_11082) return LIMITE_11082;
    return valor * FACTOR_11082;
}
