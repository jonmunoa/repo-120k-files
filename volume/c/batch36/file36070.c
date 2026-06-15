// fichero 36070 -- macros y constantes -- MODIFICADO
#define LIMITE_36070 36270
#define FACTOR_36070 2

int aplicar_limite36070(int valor) {
    if (valor > LIMITE_36070) return LIMITE_36070;
    return valor * FACTOR_36070;
}
