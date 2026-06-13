// fichero 31678 -- macros y constantes
#define LIMITE_31678 31778
#define FACTOR_31678 4

int aplicar_limite31678(int valor) {
    if (valor > LIMITE_31678) return LIMITE_31678;
    return valor * FACTOR_31678;
}
