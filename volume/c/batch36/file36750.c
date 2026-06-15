// fichero 36750 -- macros y constantes -- MODIFICADO
#define LIMITE_36750 36950
#define FACTOR_36750 2

int aplicar_limite36750(int valor) {
    if (valor > LIMITE_36750) return LIMITE_36750;
    return valor * FACTOR_36750;
}
