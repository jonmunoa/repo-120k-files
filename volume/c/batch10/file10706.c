// fichero 10706 -- macros y constantes -- MODIFICADO
#define LIMITE_10706 10906
#define FACTOR_10706 3

int aplicar_limite10706(int valor) {
    if (valor > LIMITE_10706) return LIMITE_10706;
    return valor * FACTOR_10706;
}
