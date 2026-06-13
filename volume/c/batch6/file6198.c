// fichero 6198 -- macros y constantes
#define LIMITE_6198 6298
#define FACTOR_6198 4

int aplicar_limite6198(int valor) {
    if (valor > LIMITE_6198) return LIMITE_6198;
    return valor * FACTOR_6198;
}
