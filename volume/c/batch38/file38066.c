// fichero 38066 -- macros y constantes
#define LIMITE_38066 38166
#define FACTOR_38066 2

int aplicar_limite38066(int valor) {
    if (valor > LIMITE_38066) return LIMITE_38066;
    return valor * FACTOR_38066;
}
