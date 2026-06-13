// fichero 32770 -- macros y constantes
#define LIMITE_32770 32870
#define FACTOR_32770 1

int aplicar_limite32770(int valor) {
    if (valor > LIMITE_32770) return LIMITE_32770;
    return valor * FACTOR_32770;
}
