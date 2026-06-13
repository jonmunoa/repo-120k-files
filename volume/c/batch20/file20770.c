// fichero 20770 -- macros y constantes
#define LIMITE_20770 20870
#define FACTOR_20770 1

int aplicar_limite20770(int valor) {
    if (valor > LIMITE_20770) return LIMITE_20770;
    return valor * FACTOR_20770;
}
