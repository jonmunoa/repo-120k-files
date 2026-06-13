// fichero 22302 -- macros y constantes
#define LIMITE_22302 22402
#define FACTOR_22302 3

int aplicar_limite22302(int valor) {
    if (valor > LIMITE_22302) return LIMITE_22302;
    return valor * FACTOR_22302;
}
