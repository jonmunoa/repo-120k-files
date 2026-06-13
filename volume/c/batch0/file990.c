// fichero 990 -- macros y constantes
#define LIMITE_990 1090
#define FACTOR_990 1

int aplicar_limite990(int valor) {
    if (valor > LIMITE_990) return LIMITE_990;
    return valor * FACTOR_990;
}
