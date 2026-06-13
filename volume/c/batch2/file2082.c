// fichero 2082 -- macros y constantes
#define LIMITE_2082 2182
#define FACTOR_2082 3

int aplicar_limite2082(int valor) {
    if (valor > LIMITE_2082) return LIMITE_2082;
    return valor * FACTOR_2082;
}
