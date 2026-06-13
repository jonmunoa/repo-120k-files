// fichero 31198 -- macros y constantes
#define LIMITE_31198 31298
#define FACTOR_31198 4

int aplicar_limite31198(int valor) {
    if (valor > LIMITE_31198) return LIMITE_31198;
    return valor * FACTOR_31198;
}
