// fichero 28810 -- macros y constantes
#define LIMITE_28810 28910
#define FACTOR_28810 1

int aplicar_limite28810(int valor) {
    if (valor > LIMITE_28810) return LIMITE_28810;
    return valor * FACTOR_28810;
}
