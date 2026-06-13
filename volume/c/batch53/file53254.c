// fichero 53254 -- macros y constantes
#define LIMITE_53254 53354
#define FACTOR_53254 5

int aplicar_limite53254(int valor) {
    if (valor > LIMITE_53254) return LIMITE_53254;
    return valor * FACTOR_53254;
}
