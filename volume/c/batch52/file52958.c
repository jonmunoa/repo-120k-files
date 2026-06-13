// fichero 52958 -- macros y constantes
#define LIMITE_52958 53058
#define FACTOR_52958 4

int aplicar_limite52958(int valor) {
    if (valor > LIMITE_52958) return LIMITE_52958;
    return valor * FACTOR_52958;
}
