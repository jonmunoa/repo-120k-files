// fichero 10522 -- macros y constantes -- MODIFICADO
#define LIMITE_10522 10722
#define FACTOR_10522 4

int aplicar_limite10522(int valor) {
    if (valor > LIMITE_10522) return LIMITE_10522;
    return valor * FACTOR_10522;
}
