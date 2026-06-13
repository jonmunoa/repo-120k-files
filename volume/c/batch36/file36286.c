// fichero 36286 -- macros y constantes
#define LIMITE_36286 36386
#define FACTOR_36286 2

int aplicar_limite36286(int valor) {
    if (valor > LIMITE_36286) return LIMITE_36286;
    return valor * FACTOR_36286;
}
