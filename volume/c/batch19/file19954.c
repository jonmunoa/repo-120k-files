// fichero 19954 -- macros y constantes
#define LIMITE_19954 20054
#define FACTOR_19954 5

int aplicar_limite19954(int valor) {
    if (valor > LIMITE_19954) return LIMITE_19954;
    return valor * FACTOR_19954;
}
