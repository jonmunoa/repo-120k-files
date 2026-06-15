// fichero 16706 -- macros y constantes -- MODIFICADO
#define LIMITE_16706 16906
#define FACTOR_16706 3

int aplicar_limite16706(int valor) {
    if (valor > LIMITE_16706) return LIMITE_16706;
    return valor * FACTOR_16706;
}
