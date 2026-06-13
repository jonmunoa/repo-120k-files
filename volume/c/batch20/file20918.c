// fichero 20918 -- macros y constantes
#define LIMITE_20918 21018
#define FACTOR_20918 4

int aplicar_limite20918(int valor) {
    if (valor > LIMITE_20918) return LIMITE_20918;
    return valor * FACTOR_20918;
}
