// fichero 54958 -- macros y constantes
#define LIMITE_54958 55058
#define FACTOR_54958 4

int aplicar_limite54958(int valor) {
    if (valor > LIMITE_54958) return LIMITE_54958;
    return valor * FACTOR_54958;
}
