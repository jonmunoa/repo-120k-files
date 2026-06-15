// fichero 20150 -- macros y constantes -- MODIFICADO
#define LIMITE_20150 20350
#define FACTOR_20150 2

int aplicar_limite20150(int valor) {
    if (valor > LIMITE_20150) return LIMITE_20150;
    return valor * FACTOR_20150;
}
