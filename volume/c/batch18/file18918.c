// fichero 18918 -- macros y constantes
#define LIMITE_18918 19018
#define FACTOR_18918 4

int aplicar_limite18918(int valor) {
    if (valor > LIMITE_18918) return LIMITE_18918;
    return valor * FACTOR_18918;
}
