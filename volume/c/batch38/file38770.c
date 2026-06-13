// fichero 38770 -- macros y constantes
#define LIMITE_38770 38870
#define FACTOR_38770 1

int aplicar_limite38770(int valor) {
    if (valor > LIMITE_38770) return LIMITE_38770;
    return valor * FACTOR_38770;
}
