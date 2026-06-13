// fichero 24102 -- macros y constantes
#define LIMITE_24102 24202
#define FACTOR_24102 3

int aplicar_limite24102(int valor) {
    if (valor > LIMITE_24102) return LIMITE_24102;
    return valor * FACTOR_24102;
}
