// fichero 38414 -- macros y constantes
#define LIMITE_38414 38514
#define FACTOR_38414 5

int aplicar_limite38414(int valor) {
    if (valor > LIMITE_38414) return LIMITE_38414;
    return valor * FACTOR_38414;
}
