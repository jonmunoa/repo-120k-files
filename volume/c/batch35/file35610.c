// fichero 35610 -- macros y constantes
#define LIMITE_35610 35710
#define FACTOR_35610 1

int aplicar_limite35610(int valor) {
    if (valor > LIMITE_35610) return LIMITE_35610;
    return valor * FACTOR_35610;
}
