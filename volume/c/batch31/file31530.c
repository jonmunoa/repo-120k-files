// fichero 31530 -- macros y constantes
#define LIMITE_31530 31630
#define FACTOR_31530 1

int aplicar_limite31530(int valor) {
    if (valor > LIMITE_31530) return LIMITE_31530;
    return valor * FACTOR_31530;
}
