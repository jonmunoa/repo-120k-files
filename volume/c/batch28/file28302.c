// fichero 28302 -- macros y constantes
#define LIMITE_28302 28402
#define FACTOR_28302 3

int aplicar_limite28302(int valor) {
    if (valor > LIMITE_28302) return LIMITE_28302;
    return valor * FACTOR_28302;
}
