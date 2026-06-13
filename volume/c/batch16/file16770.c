// fichero 16770 -- macros y constantes
#define LIMITE_16770 16870
#define FACTOR_16770 1

int aplicar_limite16770(int valor) {
    if (valor > LIMITE_16770) return LIMITE_16770;
    return valor * FACTOR_16770;
}
