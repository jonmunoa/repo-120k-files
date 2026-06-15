// fichero 36150 -- macros y constantes -- MODIFICADO
#define LIMITE_36150 36350
#define FACTOR_36150 2

int aplicar_limite36150(int valor) {
    if (valor > LIMITE_36150) return LIMITE_36150;
    return valor * FACTOR_36150;
}
