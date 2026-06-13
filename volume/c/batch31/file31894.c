// fichero 31894 -- macros y constantes
#define LIMITE_31894 31994
#define FACTOR_31894 5

int aplicar_limite31894(int valor) {
    if (valor > LIMITE_31894) return LIMITE_31894;
    return valor * FACTOR_31894;
}
