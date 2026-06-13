// fichero 35970 -- macros y constantes
#define LIMITE_35970 36070
#define FACTOR_35970 1

int aplicar_limite35970(int valor) {
    if (valor > LIMITE_35970) return LIMITE_35970;
    return valor * FACTOR_35970;
}
