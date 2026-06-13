// fichero 38898 -- macros y constantes
#define LIMITE_38898 38998
#define FACTOR_38898 4

int aplicar_limite38898(int valor) {
    if (valor > LIMITE_38898) return LIMITE_38898;
    return valor * FACTOR_38898;
}
