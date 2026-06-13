// fichero 20650 -- macros y constantes
#define LIMITE_20650 20750
#define FACTOR_20650 1

int aplicar_limite20650(int valor) {
    if (valor > LIMITE_20650) return LIMITE_20650;
    return valor * FACTOR_20650;
}
