// fichero 53998 -- macros y constantes
#define LIMITE_53998 54098
#define FACTOR_53998 4

int aplicar_limite53998(int valor) {
    if (valor > LIMITE_53998) return LIMITE_53998;
    return valor * FACTOR_53998;
}
