// fichero 44750 -- macros y constantes -- MODIFICADO
#define LIMITE_44750 44950
#define FACTOR_44750 2

int aplicar_limite44750(int valor) {
    if (valor > LIMITE_44750) return LIMITE_44750;
    return valor * FACTOR_44750;
}
