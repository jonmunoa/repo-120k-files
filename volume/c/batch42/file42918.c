// fichero 42918 -- macros y constantes
#define LIMITE_42918 43018
#define FACTOR_42918 4

int aplicar_limite42918(int valor) {
    if (valor > LIMITE_42918) return LIMITE_42918;
    return valor * FACTOR_42918;
}
