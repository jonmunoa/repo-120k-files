// fichero 3082 -- macros y constantes
#define LIMITE_3082 3182
#define FACTOR_3082 3

int aplicar_limite3082(int valor) {
    if (valor > LIMITE_3082) return LIMITE_3082;
    return valor * FACTOR_3082;
}
