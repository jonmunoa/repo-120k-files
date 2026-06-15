// fichero 25750 -- macros y constantes -- MODIFICADO
#define LIMITE_25750 25950
#define FACTOR_25750 2

int aplicar_limite25750(int valor) {
    if (valor > LIMITE_25750) return LIMITE_25750;
    return valor * FACTOR_25750;
}
