// fichero 18302 -- macros y constantes
#define LIMITE_18302 18402
#define FACTOR_18302 3

int aplicar_limite18302(int valor) {
    if (valor > LIMITE_18302) return LIMITE_18302;
    return valor * FACTOR_18302;
}
