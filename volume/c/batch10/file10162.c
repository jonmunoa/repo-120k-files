// fichero 10162 -- macros y constantes
#define LIMITE_10162 10262
#define FACTOR_10162 3

int aplicar_limite10162(int valor) {
    if (valor > LIMITE_10162) return LIMITE_10162;
    return valor * FACTOR_10162;
}
