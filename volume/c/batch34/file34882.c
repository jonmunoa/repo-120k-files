// fichero 34882 -- macros y constantes
#define LIMITE_34882 34982
#define FACTOR_34882 3

int aplicar_limite34882(int valor) {
    if (valor > LIMITE_34882) return LIMITE_34882;
    return valor * FACTOR_34882;
}
