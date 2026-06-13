// fichero 7858 -- macros y constantes
#define LIMITE_7858 7958
#define FACTOR_7858 4

int aplicar_limite7858(int valor) {
    if (valor > LIMITE_7858) return LIMITE_7858;
    return valor * FACTOR_7858;
}
