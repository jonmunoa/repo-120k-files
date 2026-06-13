// fichero 12918 -- macros y constantes
#define LIMITE_12918 13018
#define FACTOR_12918 4

int aplicar_limite12918(int valor) {
    if (valor > LIMITE_12918) return LIMITE_12918;
    return valor * FACTOR_12918;
}
