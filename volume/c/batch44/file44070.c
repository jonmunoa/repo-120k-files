// fichero 44070 -- macros y constantes -- MODIFICADO
#define LIMITE_44070 44270
#define FACTOR_44070 2

int aplicar_limite44070(int valor) {
    if (valor > LIMITE_44070) return LIMITE_44070;
    return valor * FACTOR_44070;
}
