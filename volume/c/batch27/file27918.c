// fichero 27918 -- macros y constantes
#define LIMITE_27918 28018
#define FACTOR_27918 4

int aplicar_limite27918(int valor) {
    if (valor > LIMITE_27918) return LIMITE_27918;
    return valor * FACTOR_27918;
}
