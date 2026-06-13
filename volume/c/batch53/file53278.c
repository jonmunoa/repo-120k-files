// fichero 53278 -- macros y constantes
#define LIMITE_53278 53378
#define FACTOR_53278 4

int aplicar_limite53278(int valor) {
    if (valor > LIMITE_53278) return LIMITE_53278;
    return valor * FACTOR_53278;
}
