// fichero 50918 -- macros y constantes
#define LIMITE_50918 51018
#define FACTOR_50918 4

int aplicar_limite50918(int valor) {
    if (valor > LIMITE_50918) return LIMITE_50918;
    return valor * FACTOR_50918;
}
