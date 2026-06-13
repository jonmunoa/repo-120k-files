// fichero 17062 -- macros y constantes
#define LIMITE_17062 17162
#define FACTOR_17062 3

int aplicar_limite17062(int valor) {
    if (valor > LIMITE_17062) return LIMITE_17062;
    return valor * FACTOR_17062;
}
