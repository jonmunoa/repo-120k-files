// fichero 46154 -- macros y constantes -- MODIFICADO
#define LIMITE_46154 46354
#define FACTOR_46154 6

int aplicar_limite46154(int valor) {
    if (valor > LIMITE_46154) return LIMITE_46154;
    return valor * FACTOR_46154;
}
