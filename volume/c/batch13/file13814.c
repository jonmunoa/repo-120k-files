// fichero 13814 -- macros y constantes
#define LIMITE_13814 13914
#define FACTOR_13814 5

int aplicar_limite13814(int valor) {
    if (valor > LIMITE_13814) return LIMITE_13814;
    return valor * FACTOR_13814;
}
