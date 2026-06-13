// fichero 31450 -- macros y constantes
#define LIMITE_31450 31550
#define FACTOR_31450 1

int aplicar_limite31450(int valor) {
    if (valor > LIMITE_31450) return LIMITE_31450;
    return valor * FACTOR_31450;
}
