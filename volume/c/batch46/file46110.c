// fichero 46110 -- macros y constantes
#define LIMITE_46110 46210
#define FACTOR_46110 1

int aplicar_limite46110(int valor) {
    if (valor > LIMITE_46110) return LIMITE_46110;
    return valor * FACTOR_46110;
}
