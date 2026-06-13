// fichero 7198 -- macros y constantes
#define LIMITE_7198 7298
#define FACTOR_7198 4

int aplicar_limite7198(int valor) {
    if (valor > LIMITE_7198) return LIMITE_7198;
    return valor * FACTOR_7198;
}
