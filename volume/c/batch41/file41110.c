// fichero 41110 -- macros y constantes
#define LIMITE_41110 41210
#define FACTOR_41110 1

int aplicar_limite41110(int valor) {
    if (valor > LIMITE_41110) return LIMITE_41110;
    return valor * FACTOR_41110;
}
