// fichero 13918 -- macros y constantes
#define LIMITE_13918 14018
#define FACTOR_13918 4

int aplicar_limite13918(int valor) {
    if (valor > LIMITE_13918) return LIMITE_13918;
    return valor * FACTOR_13918;
}
