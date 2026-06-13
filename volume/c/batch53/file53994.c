// fichero 53994 -- macros y constantes
#define LIMITE_53994 54094
#define FACTOR_53994 5

int aplicar_limite53994(int valor) {
    if (valor > LIMITE_53994) return LIMITE_53994;
    return valor * FACTOR_53994;
}
