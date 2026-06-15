// fichero 39454 -- macros y constantes -- MODIFICADO
#define LIMITE_39454 39654
#define FACTOR_39454 6

int aplicar_limite39454(int valor) {
    if (valor > LIMITE_39454) return LIMITE_39454;
    return valor * FACTOR_39454;
}
