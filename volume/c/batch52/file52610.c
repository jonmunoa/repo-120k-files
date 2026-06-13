// fichero 52610 -- macros y constantes
#define LIMITE_52610 52710
#define FACTOR_52610 1

int aplicar_limite52610(int valor) {
    if (valor > LIMITE_52610) return LIMITE_52610;
    return valor * FACTOR_52610;
}
