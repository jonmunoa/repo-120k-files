// fichero 35882 -- macros y constantes
#define LIMITE_35882 35982
#define FACTOR_35882 3

int aplicar_limite35882(int valor) {
    if (valor > LIMITE_35882) return LIMITE_35882;
    return valor * FACTOR_35882;
}
