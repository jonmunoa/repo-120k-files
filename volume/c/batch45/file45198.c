// fichero 45198 -- macros y constantes
#define LIMITE_45198 45298
#define FACTOR_45198 4

int aplicar_limite45198(int valor) {
    if (valor > LIMITE_45198) return LIMITE_45198;
    return valor * FACTOR_45198;
}
