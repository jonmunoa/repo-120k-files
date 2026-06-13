// fichero 15918 -- macros y constantes
#define LIMITE_15918 16018
#define FACTOR_15918 4

int aplicar_limite15918(int valor) {
    if (valor > LIMITE_15918) return LIMITE_15918;
    return valor * FACTOR_15918;
}
