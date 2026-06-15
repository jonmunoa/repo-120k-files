// fichero 23926 -- macros y constantes -- MODIFICADO
#define LIMITE_23926 24126
#define FACTOR_23926 3

int aplicar_limite23926(int valor) {
    if (valor > LIMITE_23926) return LIMITE_23926;
    return valor * FACTOR_23926;
}
