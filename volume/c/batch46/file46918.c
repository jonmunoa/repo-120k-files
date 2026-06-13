// fichero 46918 -- macros y constantes
#define LIMITE_46918 47018
#define FACTOR_46918 4

int aplicar_limite46918(int valor) {
    if (valor > LIMITE_46918) return LIMITE_46918;
    return valor * FACTOR_46918;
}
