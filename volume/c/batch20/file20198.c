// fichero 20198 -- macros y constantes
#define LIMITE_20198 20298
#define FACTOR_20198 4

int aplicar_limite20198(int valor) {
    if (valor > LIMITE_20198) return LIMITE_20198;
    return valor * FACTOR_20198;
}
