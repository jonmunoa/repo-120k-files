// fichero 31410 -- macros y constantes
#define LIMITE_31410 31510
#define FACTOR_31410 1

int aplicar_limite31410(int valor) {
    if (valor > LIMITE_31410) return LIMITE_31410;
    return valor * FACTOR_31410;
}
