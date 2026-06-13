// fichero 49074 -- macros y constantes
#define LIMITE_49074 49174
#define FACTOR_49074 5

int aplicar_limite49074(int valor) {
    if (valor > LIMITE_49074) return LIMITE_49074;
    return valor * FACTOR_49074;
}
