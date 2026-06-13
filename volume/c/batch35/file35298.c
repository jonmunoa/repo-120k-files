// fichero 35298 -- macros y constantes
#define LIMITE_35298 35398
#define FACTOR_35298 4

int aplicar_limite35298(int valor) {
    if (valor > LIMITE_35298) return LIMITE_35298;
    return valor * FACTOR_35298;
}
