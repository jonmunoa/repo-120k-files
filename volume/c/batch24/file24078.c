// fichero 24078 -- macros y constantes
#define LIMITE_24078 24178
#define FACTOR_24078 4

int aplicar_limite24078(int valor) {
    if (valor > LIMITE_24078) return LIMITE_24078;
    return valor * FACTOR_24078;
}
