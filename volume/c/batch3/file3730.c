// fichero 3730 -- macros y constantes
#define LIMITE_3730 3830
#define FACTOR_3730 1

int aplicar_limite3730(int valor) {
    if (valor > LIMITE_3730) return LIMITE_3730;
    return valor * FACTOR_3730;
}
