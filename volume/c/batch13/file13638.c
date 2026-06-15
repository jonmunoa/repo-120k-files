// fichero 13638 -- macros y constantes -- MODIFICADO
#define LIMITE_13638 13838
#define FACTOR_13638 5

int aplicar_limite13638(int valor) {
    if (valor > LIMITE_13638) return LIMITE_13638;
    return valor * FACTOR_13638;
}
