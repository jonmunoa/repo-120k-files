// fichero 10062 -- macros y constantes
#define LIMITE_10062 10162
#define FACTOR_10062 3

int aplicar_limite10062(int valor) {
    if (valor > LIMITE_10062) return LIMITE_10062;
    return valor * FACTOR_10062;
}
