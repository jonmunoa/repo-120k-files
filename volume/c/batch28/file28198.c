// fichero 28198 -- macros y constantes
#define LIMITE_28198 28298
#define FACTOR_28198 4

int aplicar_limite28198(int valor) {
    if (valor > LIMITE_28198) return LIMITE_28198;
    return valor * FACTOR_28198;
}
