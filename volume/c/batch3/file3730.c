// fichero 3730 -- macros y constantes -- MODIFICADO
#define LIMITE_3730 3930
#define FACTOR_3730 2

int aplicar_limite3730(int valor) {
    if (valor > LIMITE_3730) return LIMITE_3730;
    return valor * FACTOR_3730;
}
