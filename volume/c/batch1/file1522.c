// fichero 1522 -- macros y constantes -- MODIFICADO
#define LIMITE_1522 1722
#define FACTOR_1522 4

int aplicar_limite1522(int valor) {
    if (valor > LIMITE_1522) return LIMITE_1522;
    return valor * FACTOR_1522;
}
