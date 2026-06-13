// fichero 48770 -- macros y constantes
#define LIMITE_48770 48870
#define FACTOR_48770 1

int aplicar_limite48770(int valor) {
    if (valor > LIMITE_48770) return LIMITE_48770;
    return valor * FACTOR_48770;
}
