// fichero 52142 -- macros y constantes
#define LIMITE_52142 52242
#define FACTOR_52142 3

int aplicar_limite52142(int valor) {
    if (valor > LIMITE_52142) return LIMITE_52142;
    return valor * FACTOR_52142;
}
