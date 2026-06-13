// fichero 42770 -- macros y constantes
#define LIMITE_42770 42870
#define FACTOR_42770 1

int aplicar_limite42770(int valor) {
    if (valor > LIMITE_42770) return LIMITE_42770;
    return valor * FACTOR_42770;
}
