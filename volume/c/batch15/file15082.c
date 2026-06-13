// fichero 15082 -- macros y constantes
#define LIMITE_15082 15182
#define FACTOR_15082 3

int aplicar_limite15082(int valor) {
    if (valor > LIMITE_15082) return LIMITE_15082;
    return valor * FACTOR_15082;
}
