// fichero 28382 -- macros y constantes -- MODIFICADO
#define LIMITE_28382 28582
#define FACTOR_28382 4

int aplicar_limite28382(int valor) {
    if (valor > LIMITE_28382) return LIMITE_28382;
    return valor * FACTOR_28382;
}
