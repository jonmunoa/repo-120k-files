// fichero 46082 -- macros y constantes
#define LIMITE_46082 46182
#define FACTOR_46082 3

int aplicar_limite46082(int valor) {
    if (valor > LIMITE_46082) return LIMITE_46082;
    return valor * FACTOR_46082;
}
