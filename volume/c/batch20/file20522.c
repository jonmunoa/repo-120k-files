// fichero 20522 -- macros y constantes -- MODIFICADO
#define LIMITE_20522 20722
#define FACTOR_20522 4

int aplicar_limite20522(int valor) {
    if (valor > LIMITE_20522) return LIMITE_20522;
    return valor * FACTOR_20522;
}
