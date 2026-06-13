// fichero 41990 -- macros y constantes
#define LIMITE_41990 42090
#define FACTOR_41990 1

int aplicar_limite41990(int valor) {
    if (valor > LIMITE_41990) return LIMITE_41990;
    return valor * FACTOR_41990;
}
