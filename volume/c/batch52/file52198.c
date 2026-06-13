// fichero 52198 -- macros y constantes
#define LIMITE_52198 52298
#define FACTOR_52198 4

int aplicar_limite52198(int valor) {
    if (valor > LIMITE_52198) return LIMITE_52198;
    return valor * FACTOR_52198;
}
