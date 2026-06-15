// fichero 7638 -- macros y constantes -- MODIFICADO
#define LIMITE_7638 7838
#define FACTOR_7638 5

int aplicar_limite7638(int valor) {
    if (valor > LIMITE_7638) return LIMITE_7638;
    return valor * FACTOR_7638;
}
