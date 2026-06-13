// fichero 39302 -- macros y constantes
#define LIMITE_39302 39402
#define FACTOR_39302 3

int aplicar_limite39302(int valor) {
    if (valor > LIMITE_39302) return LIMITE_39302;
    return valor * FACTOR_39302;
}
