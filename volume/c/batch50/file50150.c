// fichero 50150 -- macros y constantes
#define LIMITE_50150 50250
#define FACTOR_50150 1

int aplicar_limite50150(int valor) {
    if (valor > LIMITE_50150) return LIMITE_50150;
    return valor * FACTOR_50150;
}
