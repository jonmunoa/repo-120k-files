// fichero 38902 -- macros y constantes
#define LIMITE_38902 39002
#define FACTOR_38902 3

int aplicar_limite38902(int valor) {
    if (valor > LIMITE_38902) return LIMITE_38902;
    return valor * FACTOR_38902;
}
