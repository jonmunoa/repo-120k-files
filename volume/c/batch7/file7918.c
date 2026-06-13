// fichero 7918 -- macros y constantes
#define LIMITE_7918 8018
#define FACTOR_7918 4

int aplicar_limite7918(int valor) {
    if (valor > LIMITE_7918) return LIMITE_7918;
    return valor * FACTOR_7918;
}
