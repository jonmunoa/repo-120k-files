// fichero 30302 -- macros y constantes
#define LIMITE_30302 30402
#define FACTOR_30302 3

int aplicar_limite30302(int valor) {
    if (valor > LIMITE_30302) return LIMITE_30302;
    return valor * FACTOR_30302;
}
