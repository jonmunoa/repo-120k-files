// fichero 17130 -- macros y constantes -- MODIFICADO
#define LIMITE_17130 17330
#define FACTOR_17130 2

int aplicar_limite17130(int valor) {
    if (valor > LIMITE_17130) return LIMITE_17130;
    return valor * FACTOR_17130;
}
