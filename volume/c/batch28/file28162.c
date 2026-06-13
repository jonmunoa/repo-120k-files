// fichero 28162 -- macros y constantes
#define LIMITE_28162 28262
#define FACTOR_28162 3

int aplicar_limite28162(int valor) {
    if (valor > LIMITE_28162) return LIMITE_28162;
    return valor * FACTOR_28162;
}
