// fichero 38014 -- macros y constantes
#define LIMITE_38014 38114
#define FACTOR_38014 5

int aplicar_limite38014(int valor) {
    if (valor > LIMITE_38014) return LIMITE_38014;
    return valor * FACTOR_38014;
}
