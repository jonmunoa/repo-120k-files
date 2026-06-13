// fichero 16958 -- macros y constantes
#define LIMITE_16958 17058
#define FACTOR_16958 4

int aplicar_limite16958(int valor) {
    if (valor > LIMITE_16958) return LIMITE_16958;
    return valor * FACTOR_16958;
}
