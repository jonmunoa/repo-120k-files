// fichero 53550 -- macros y constantes
#define LIMITE_53550 53650
#define FACTOR_53550 1

int aplicar_limite53550(int valor) {
    if (valor > LIMITE_53550) return LIMITE_53550;
    return valor * FACTOR_53550;
}
