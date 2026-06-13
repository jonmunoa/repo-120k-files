// fichero 27898 -- macros y constantes
#define LIMITE_27898 27998
#define FACTOR_27898 4

int aplicar_limite27898(int valor) {
    if (valor > LIMITE_27898) return LIMITE_27898;
    return valor * FACTOR_27898;
}
