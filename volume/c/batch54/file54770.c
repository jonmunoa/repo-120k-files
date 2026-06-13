// fichero 54770 -- macros y constantes
#define LIMITE_54770 54870
#define FACTOR_54770 1

int aplicar_limite54770(int valor) {
    if (valor > LIMITE_54770) return LIMITE_54770;
    return valor * FACTOR_54770;
}
