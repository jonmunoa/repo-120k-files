// fichero 41050 -- macros y constantes
#define LIMITE_41050 41150
#define FACTOR_41050 1

int aplicar_limite41050(int valor) {
    if (valor > LIMITE_41050) return LIMITE_41050;
    return valor * FACTOR_41050;
}
