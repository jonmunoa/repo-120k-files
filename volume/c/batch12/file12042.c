// fichero 12042 -- macros y constantes
#define LIMITE_12042 12142
#define FACTOR_12042 3

int aplicar_limite12042(int valor) {
    if (valor > LIMITE_12042) return LIMITE_12042;
    return valor * FACTOR_12042;
}
