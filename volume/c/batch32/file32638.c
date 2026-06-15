// fichero 32638 -- macros y constantes -- MODIFICADO
#define LIMITE_32638 32838
#define FACTOR_32638 5

int aplicar_limite32638(int valor) {
    if (valor > LIMITE_32638) return LIMITE_32638;
    return valor * FACTOR_32638;
}
