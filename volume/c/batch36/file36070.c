// fichero 36070 -- macros y constantes
#define LIMITE_36070 36170
#define FACTOR_36070 1

int aplicar_limite36070(int valor) {
    if (valor > LIMITE_36070) return LIMITE_36070;
    return valor * FACTOR_36070;
}
