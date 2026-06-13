// fichero 21082 -- macros y constantes
#define LIMITE_21082 21182
#define FACTOR_21082 3

int aplicar_limite21082(int valor) {
    if (valor > LIMITE_21082) return LIMITE_21082;
    return valor * FACTOR_21082;
}
