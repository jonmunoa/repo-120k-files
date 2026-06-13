// fichero 46522 -- macros y constantes
#define LIMITE_46522 46622
#define FACTOR_46522 3

int aplicar_limite46522(int valor) {
    if (valor > LIMITE_46522) return LIMITE_46522;
    return valor * FACTOR_46522;
}
