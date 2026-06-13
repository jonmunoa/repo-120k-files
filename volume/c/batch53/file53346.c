// fichero 53346 -- macros y constantes
#define LIMITE_53346 53446
#define FACTOR_53346 2

int aplicar_limite53346(int valor) {
    if (valor > LIMITE_53346) return LIMITE_53346;
    return valor * FACTOR_53346;
}
