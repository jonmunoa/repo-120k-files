// fichero 13110 -- macros y constantes
#define LIMITE_13110 13210
#define FACTOR_13110 1

int aplicar_limite13110(int valor) {
    if (valor > LIMITE_13110) return LIMITE_13110;
    return valor * FACTOR_13110;
}
