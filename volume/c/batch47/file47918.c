// fichero 47918 -- macros y constantes
#define LIMITE_47918 48018
#define FACTOR_47918 4

int aplicar_limite47918(int valor) {
    if (valor > LIMITE_47918) return LIMITE_47918;
    return valor * FACTOR_47918;
}
