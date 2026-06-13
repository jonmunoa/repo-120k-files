// fichero 31082 -- macros y constantes
#define LIMITE_31082 31182
#define FACTOR_31082 3

int aplicar_limite31082(int valor) {
    if (valor > LIMITE_31082) return LIMITE_31082;
    return valor * FACTOR_31082;
}
