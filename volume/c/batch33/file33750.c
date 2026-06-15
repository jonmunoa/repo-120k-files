// fichero 33750 -- macros y constantes -- MODIFICADO
#define LIMITE_33750 33950
#define FACTOR_33750 2

int aplicar_limite33750(int valor) {
    if (valor > LIMITE_33750) return LIMITE_33750;
    return valor * FACTOR_33750;
}
