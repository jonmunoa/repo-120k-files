// fichero 28266 -- macros y constantes -- MODIFICADO
#define LIMITE_28266 28466
#define FACTOR_28266 3

int aplicar_limite28266(int valor) {
    if (valor > LIMITE_28266) return LIMITE_28266;
    return valor * FACTOR_28266;
}
