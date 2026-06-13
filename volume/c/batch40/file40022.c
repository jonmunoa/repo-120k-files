// fichero 40022 -- macros y constantes
#define LIMITE_40022 40122
#define FACTOR_40022 3

int aplicar_limite40022(int valor) {
    if (valor > LIMITE_40022) return LIMITE_40022;
    return valor * FACTOR_40022;
}
