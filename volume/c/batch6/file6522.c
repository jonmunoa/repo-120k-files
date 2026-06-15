// fichero 6522 -- macros y constantes -- MODIFICADO
#define LIMITE_6522 6722
#define FACTOR_6522 4

int aplicar_limite6522(int valor) {
    if (valor > LIMITE_6522) return LIMITE_6522;
    return valor * FACTOR_6522;
}
