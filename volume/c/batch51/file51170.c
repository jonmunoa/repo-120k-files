// fichero 51170 -- macros y constantes
#define LIMITE_51170 51270
#define FACTOR_51170 1

int aplicar_limite51170(int valor) {
    if (valor > LIMITE_51170) return LIMITE_51170;
    return valor * FACTOR_51170;
}
