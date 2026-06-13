// fichero 21610 -- macros y constantes
#define LIMITE_21610 21710
#define FACTOR_21610 1

int aplicar_limite21610(int valor) {
    if (valor > LIMITE_21610) return LIMITE_21610;
    return valor * FACTOR_21610;
}
