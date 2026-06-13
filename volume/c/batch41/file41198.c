// fichero 41198 -- macros y constantes
#define LIMITE_41198 41298
#define FACTOR_41198 4

int aplicar_limite41198(int valor) {
    if (valor > LIMITE_41198) return LIMITE_41198;
    return valor * FACTOR_41198;
}
