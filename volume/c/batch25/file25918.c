// fichero 25918 -- macros y constantes
#define LIMITE_25918 26018
#define FACTOR_25918 4

int aplicar_limite25918(int valor) {
    if (valor > LIMITE_25918) return LIMITE_25918;
    return valor * FACTOR_25918;
}
