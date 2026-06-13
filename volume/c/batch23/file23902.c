// fichero 23902 -- macros y constantes
#define LIMITE_23902 24002
#define FACTOR_23902 3

int aplicar_limite23902(int valor) {
    if (valor > LIMITE_23902) return LIMITE_23902;
    return valor * FACTOR_23902;
}
