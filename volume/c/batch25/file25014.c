// fichero 25014 -- macros y constantes
#define LIMITE_25014 25114
#define FACTOR_25014 5

int aplicar_limite25014(int valor) {
    if (valor > LIMITE_25014) return LIMITE_25014;
    return valor * FACTOR_25014;
}
