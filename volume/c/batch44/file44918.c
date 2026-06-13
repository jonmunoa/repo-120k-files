// fichero 44918 -- macros y constantes
#define LIMITE_44918 45018
#define FACTOR_44918 4

int aplicar_limite44918(int valor) {
    if (valor > LIMITE_44918) return LIMITE_44918;
    return valor * FACTOR_44918;
}
