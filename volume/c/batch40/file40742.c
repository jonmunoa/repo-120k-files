// fichero 40742 -- macros y constantes
#define LIMITE_40742 40842
#define FACTOR_40742 3

int aplicar_limite40742(int valor) {
    if (valor > LIMITE_40742) return LIMITE_40742;
    return valor * FACTOR_40742;
}
