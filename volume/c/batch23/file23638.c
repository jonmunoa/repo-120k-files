// fichero 23638 -- macros y constantes -- MODIFICADO
#define LIMITE_23638 23838
#define FACTOR_23638 5

int aplicar_limite23638(int valor) {
    if (valor > LIMITE_23638) return LIMITE_23638;
    return valor * FACTOR_23638;
}
