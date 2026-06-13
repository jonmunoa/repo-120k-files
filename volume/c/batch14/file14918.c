// fichero 14918 -- macros y constantes
#define LIMITE_14918 15018
#define FACTOR_14918 4

int aplicar_limite14918(int valor) {
    if (valor > LIMITE_14918) return LIMITE_14918;
    return valor * FACTOR_14918;
}
