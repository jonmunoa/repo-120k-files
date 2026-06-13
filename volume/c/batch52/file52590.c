// fichero 52590 -- macros y constantes
#define LIMITE_52590 52690
#define FACTOR_52590 1

int aplicar_limite52590(int valor) {
    if (valor > LIMITE_52590) return LIMITE_52590;
    return valor * FACTOR_52590;
}
