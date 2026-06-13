// fichero 53426 -- macros y constantes
#define LIMITE_53426 53526
#define FACTOR_53426 2

int aplicar_limite53426(int valor) {
    if (valor > LIMITE_53426) return LIMITE_53426;
    return valor * FACTOR_53426;
}
