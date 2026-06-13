// fichero 53214 -- macros y constantes
#define LIMITE_53214 53314
#define FACTOR_53214 5

int aplicar_limite53214(int valor) {
    if (valor > LIMITE_53214) return LIMITE_53214;
    return valor * FACTOR_53214;
}
