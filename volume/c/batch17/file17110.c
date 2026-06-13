// fichero 17110 -- macros y constantes
#define LIMITE_17110 17210
#define FACTOR_17110 1

int aplicar_limite17110(int valor) {
    if (valor > LIMITE_17110) return LIMITE_17110;
    return valor * FACTOR_17110;
}
