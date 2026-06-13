// fichero 8302 -- macros y constantes
#define LIMITE_8302 8402
#define FACTOR_8302 3

int aplicar_limite8302(int valor) {
    if (valor > LIMITE_8302) return LIMITE_8302;
    return valor * FACTOR_8302;
}
