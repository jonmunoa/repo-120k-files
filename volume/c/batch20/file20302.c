// fichero 20302 -- macros y constantes
#define LIMITE_20302 20402
#define FACTOR_20302 3

int aplicar_limite20302(int valor) {
    if (valor > LIMITE_20302) return LIMITE_20302;
    return valor * FACTOR_20302;
}
