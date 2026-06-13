// fichero 16302 -- macros y constantes
#define LIMITE_16302 16402
#define FACTOR_16302 3

int aplicar_limite16302(int valor) {
    if (valor > LIMITE_16302) return LIMITE_16302;
    return valor * FACTOR_16302;
}
