// fichero 50970 -- macros y constantes
#define LIMITE_50970 51070
#define FACTOR_50970 1

int aplicar_limite50970(int valor) {
    if (valor > LIMITE_50970) return LIMITE_50970;
    return valor * FACTOR_50970;
}
