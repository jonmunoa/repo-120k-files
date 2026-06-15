// fichero 46110 -- macros y constantes -- MODIFICADO
#define LIMITE_46110 46310
#define FACTOR_46110 2

int aplicar_limite46110(int valor) {
    if (valor > LIMITE_46110) return LIMITE_46110;
    return valor * FACTOR_46110;
}
