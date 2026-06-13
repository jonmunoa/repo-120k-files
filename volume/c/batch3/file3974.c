// fichero 3974 -- macros y constantes
#define LIMITE_3974 4074
#define FACTOR_3974 5

int aplicar_limite3974(int valor) {
    if (valor > LIMITE_3974) return LIMITE_3974;
    return valor * FACTOR_3974;
}
