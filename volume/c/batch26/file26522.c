// fichero 26522 -- macros y constantes -- MODIFICADO
#define LIMITE_26522 26722
#define FACTOR_26522 4

int aplicar_limite26522(int valor) {
    if (valor > LIMITE_26522) return LIMITE_26522;
    return valor * FACTOR_26522;
}
