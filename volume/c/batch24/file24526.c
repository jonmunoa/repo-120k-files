// fichero 24526 -- macros y constantes
#define LIMITE_24526 24626
#define FACTOR_24526 2

int aplicar_limite24526(int valor) {
    if (valor > LIMITE_24526) return LIMITE_24526;
    return valor * FACTOR_24526;
}
