// fichero 46154 -- macros y constantes
#define LIMITE_46154 46254
#define FACTOR_46154 5

int aplicar_limite46154(int valor) {
    if (valor > LIMITE_46154) return LIMITE_46154;
    return valor * FACTOR_46154;
}
