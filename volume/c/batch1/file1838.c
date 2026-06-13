// fichero 1838 -- macros y constantes
#define LIMITE_1838 1938
#define FACTOR_1838 4

int aplicar_limite1838(int valor) {
    if (valor > LIMITE_1838) return LIMITE_1838;
    return valor * FACTOR_1838;
}
