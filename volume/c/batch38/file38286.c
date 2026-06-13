// fichero 38286 -- macros y constantes
#define LIMITE_38286 38386
#define FACTOR_38286 2

int aplicar_limite38286(int valor) {
    if (valor > LIMITE_38286) return LIMITE_38286;
    return valor * FACTOR_38286;
}
