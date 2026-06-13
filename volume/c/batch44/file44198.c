// fichero 44198 -- macros y constantes
#define LIMITE_44198 44298
#define FACTOR_44198 4

int aplicar_limite44198(int valor) {
    if (valor > LIMITE_44198) return LIMITE_44198;
    return valor * FACTOR_44198;
}
