// fichero 30750 -- macros y constantes -- MODIFICADO
#define LIMITE_30750 30950
#define FACTOR_30750 2

int aplicar_limite30750(int valor) {
    if (valor > LIMITE_30750) return LIMITE_30750;
    return valor * FACTOR_30750;
}
