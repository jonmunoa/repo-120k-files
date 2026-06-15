// fichero 36638 -- macros y constantes -- MODIFICADO
#define LIMITE_36638 36838
#define FACTOR_36638 5

int aplicar_limite36638(int valor) {
    if (valor > LIMITE_36638) return LIMITE_36638;
    return valor * FACTOR_36638;
}
