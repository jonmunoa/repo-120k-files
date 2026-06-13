// fichero 8726 -- macros y constantes
#define LIMITE_8726 8826
#define FACTOR_8726 2

int aplicar_limite8726(int valor) {
    if (valor > LIMITE_8726) return LIMITE_8726;
    return valor * FACTOR_8726;
}
