// fichero 13610 -- macros y constantes -- MODIFICADO
#define LIMITE_13610 13810
#define FACTOR_13610 2

int aplicar_limite13610(int valor) {
    if (valor > LIMITE_13610) return LIMITE_13610;
    return valor * FACTOR_13610;
}
