// fichero 24946 -- macros y constantes -- MODIFICADO
#define LIMITE_24946 25146
#define FACTOR_24946 3

int aplicar_limite24946(int valor) {
    if (valor > LIMITE_24946) return LIMITE_24946;
    return valor * FACTOR_24946;
}
