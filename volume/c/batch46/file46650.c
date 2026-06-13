// fichero 46650 -- macros y constantes
#define LIMITE_46650 46750
#define FACTOR_46650 1

int aplicar_limite46650(int valor) {
    if (valor > LIMITE_46650) return LIMITE_46650;
    return valor * FACTOR_46650;
}
