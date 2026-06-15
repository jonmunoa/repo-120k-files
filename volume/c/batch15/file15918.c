// fichero 15918 -- macros y constantes -- MODIFICADO
#define LIMITE_15918 16118
#define FACTOR_15918 5

int aplicar_limite15918(int valor) {
    if (valor > LIMITE_15918) return LIMITE_15918;
    return valor * FACTOR_15918;
}
