// fichero 33882 -- macros y constantes
#define LIMITE_33882 33982
#define FACTOR_33882 3

int aplicar_limite33882(int valor) {
    if (valor > LIMITE_33882) return LIMITE_33882;
    return valor * FACTOR_33882;
}
