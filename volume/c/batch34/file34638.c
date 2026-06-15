// fichero 34638 -- macros y constantes -- MODIFICADO
#define LIMITE_34638 34838
#define FACTOR_34638 5

int aplicar_limite34638(int valor) {
    if (valor > LIMITE_34638) return LIMITE_34638;
    return valor * FACTOR_34638;
}
