// fichero 11638 -- macros y constantes -- MODIFICADO
#define LIMITE_11638 11838
#define FACTOR_11638 5

int aplicar_limite11638(int valor) {
    if (valor > LIMITE_11638) return LIMITE_11638;
    return valor * FACTOR_11638;
}
