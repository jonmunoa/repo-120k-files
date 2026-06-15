// fichero 30522 -- macros y constantes -- MODIFICADO
#define LIMITE_30522 30722
#define FACTOR_30522 4

int aplicar_limite30522(int valor) {
    if (valor > LIMITE_30522) return LIMITE_30522;
    return valor * FACTOR_30522;
}
