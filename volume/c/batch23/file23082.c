// fichero 23082 -- macros y constantes
#define LIMITE_23082 23182
#define FACTOR_23082 3

int aplicar_limite23082(int valor) {
    if (valor > LIMITE_23082) return LIMITE_23082;
    return valor * FACTOR_23082;
}
