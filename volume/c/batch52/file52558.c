// fichero 52558 -- macros y constantes
#define LIMITE_52558 52658
#define FACTOR_52558 4

int aplicar_limite52558(int valor) {
    if (valor > LIMITE_52558) return LIMITE_52558;
    return valor * FACTOR_52558;
}
