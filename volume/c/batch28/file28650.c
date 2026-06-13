// fichero 28650 -- macros y constantes
#define LIMITE_28650 28750
#define FACTOR_28650 1

int aplicar_limite28650(int valor) {
    if (valor > LIMITE_28650) return LIMITE_28650;
    return valor * FACTOR_28650;
}
