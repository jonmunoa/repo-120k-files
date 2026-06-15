// fichero 21638 -- macros y constantes -- MODIFICADO
#define LIMITE_21638 21838
#define FACTOR_21638 5

int aplicar_limite21638(int valor) {
    if (valor > LIMITE_21638) return LIMITE_21638;
    return valor * FACTOR_21638;
}
