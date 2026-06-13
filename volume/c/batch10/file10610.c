// fichero 10610 -- macros y constantes
#define LIMITE_10610 10710
#define FACTOR_10610 1

int aplicar_limite10610(int valor) {
    if (valor > LIMITE_10610) return LIMITE_10610;
    return valor * FACTOR_10610;
}
