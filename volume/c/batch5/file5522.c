// fichero 5522 -- macros y constantes -- MODIFICADO
#define LIMITE_5522 5722
#define FACTOR_5522 4

int aplicar_limite5522(int valor) {
    if (valor > LIMITE_5522) return LIMITE_5522;
    return valor * FACTOR_5522;
}
