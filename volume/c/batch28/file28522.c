// fichero 28522 -- macros y constantes -- MODIFICADO
#define LIMITE_28522 28722
#define FACTOR_28522 4

int aplicar_limite28522(int valor) {
    if (valor > LIMITE_28522) return LIMITE_28522;
    return valor * FACTOR_28522;
}
