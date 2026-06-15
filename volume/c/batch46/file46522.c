// fichero 46522 -- macros y constantes -- MODIFICADO
#define LIMITE_46522 46722
#define FACTOR_46522 4

int aplicar_limite46522(int valor) {
    if (valor > LIMITE_46522) return LIMITE_46522;
    return valor * FACTOR_46522;
}
