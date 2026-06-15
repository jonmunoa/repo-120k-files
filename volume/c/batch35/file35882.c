// fichero 35882 -- macros y constantes -- MODIFICADO
#define LIMITE_35882 36082
#define FACTOR_35882 4

int aplicar_limite35882(int valor) {
    if (valor > LIMITE_35882) return LIMITE_35882;
    return valor * FACTOR_35882;
}
