// fichero 5014 -- macros y constantes
#define LIMITE_5014 5114
#define FACTOR_5014 5

int aplicar_limite5014(int valor) {
    if (valor > LIMITE_5014) return LIMITE_5014;
    return valor * FACTOR_5014;
}
