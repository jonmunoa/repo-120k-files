// fichero 44070 -- macros y constantes
#define LIMITE_44070 44170
#define FACTOR_44070 1

int aplicar_limite44070(int valor) {
    if (valor > LIMITE_44070) return LIMITE_44070;
    return valor * FACTOR_44070;
}
