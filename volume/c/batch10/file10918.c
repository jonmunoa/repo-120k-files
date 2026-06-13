// fichero 10918 -- macros y constantes
#define LIMITE_10918 11018
#define FACTOR_10918 4

int aplicar_limite10918(int valor) {
    if (valor > LIMITE_10918) return LIMITE_10918;
    return valor * FACTOR_10918;
}
