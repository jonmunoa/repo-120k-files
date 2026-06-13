// fichero 38050 -- macros y constantes
#define LIMITE_38050 38150
#define FACTOR_38050 1

int aplicar_limite38050(int valor) {
    if (valor > LIMITE_38050) return LIMITE_38050;
    return valor * FACTOR_38050;
}
