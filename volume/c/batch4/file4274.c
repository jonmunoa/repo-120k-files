// fichero 4274 -- macros y constantes
#define LIMITE_4274 4374
#define FACTOR_4274 5

int aplicar_limite4274(int valor) {
    if (valor > LIMITE_4274) return LIMITE_4274;
    return valor * FACTOR_4274;
}
