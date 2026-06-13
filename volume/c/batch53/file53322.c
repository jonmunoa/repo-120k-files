// fichero 53322 -- macros y constantes
#define LIMITE_53322 53422
#define FACTOR_53322 3

int aplicar_limite53322(int valor) {
    if (valor > LIMITE_53322) return LIMITE_53322;
    return valor * FACTOR_53322;
}
