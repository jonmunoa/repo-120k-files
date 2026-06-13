// fichero 28918 -- macros y constantes
#define LIMITE_28918 29018
#define FACTOR_28918 4

int aplicar_limite28918(int valor) {
    if (valor > LIMITE_28918) return LIMITE_28918;
    return valor * FACTOR_28918;
}
