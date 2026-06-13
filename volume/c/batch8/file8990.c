// fichero 8990 -- macros y constantes
#define LIMITE_8990 9090
#define FACTOR_8990 1

int aplicar_limite8990(int valor) {
    if (valor > LIMITE_8990) return LIMITE_8990;
    return valor * FACTOR_8990;
}
