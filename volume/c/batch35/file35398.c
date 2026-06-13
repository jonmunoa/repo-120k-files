// fichero 35398 -- macros y constantes
#define LIMITE_35398 35498
#define FACTOR_35398 4

int aplicar_limite35398(int valor) {
    if (valor > LIMITE_35398) return LIMITE_35398;
    return valor * FACTOR_35398;
}
