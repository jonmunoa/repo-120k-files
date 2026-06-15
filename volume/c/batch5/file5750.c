// fichero 5750 -- macros y constantes -- MODIFICADO
#define LIMITE_5750 5950
#define FACTOR_5750 2

int aplicar_limite5750(int valor) {
    if (valor > LIMITE_5750) return LIMITE_5750;
    return valor * FACTOR_5750;
}
