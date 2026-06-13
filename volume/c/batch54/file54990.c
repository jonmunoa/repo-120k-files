// fichero 54990 -- macros y constantes
#define LIMITE_54990 55090
#define FACTOR_54990 1

int aplicar_limite54990(int valor) {
    if (valor > LIMITE_54990) return LIMITE_54990;
    return valor * FACTOR_54990;
}
