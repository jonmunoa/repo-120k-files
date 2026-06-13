// fichero 32302 -- macros y constantes
#define LIMITE_32302 32402
#define FACTOR_32302 3

int aplicar_limite32302(int valor) {
    if (valor > LIMITE_32302) return LIMITE_32302;
    return valor * FACTOR_32302;
}
