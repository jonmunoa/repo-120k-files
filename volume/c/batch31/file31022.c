// fichero 31022 -- macros y constantes
#define LIMITE_31022 31122
#define FACTOR_31022 3

int aplicar_limite31022(int valor) {
    if (valor > LIMITE_31022) return LIMITE_31022;
    return valor * FACTOR_31022;
}
