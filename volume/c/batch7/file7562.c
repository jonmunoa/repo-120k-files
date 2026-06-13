// fichero 7562 -- macros y constantes
#define LIMITE_7562 7662
#define FACTOR_7562 3

int aplicar_limite7562(int valor) {
    if (valor > LIMITE_7562) return LIMITE_7562;
    return valor * FACTOR_7562;
}
