// fichero 34882 -- macros y constantes -- MODIFICADO
#define LIMITE_34882 35082
#define FACTOR_34882 4

int aplicar_limite34882(int valor) {
    if (valor > LIMITE_34882) return LIMITE_34882;
    return valor * FACTOR_34882;
}
