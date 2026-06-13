// fichero 53850 -- macros y constantes
#define LIMITE_53850 53950
#define FACTOR_53850 1

int aplicar_limite53850(int valor) {
    if (valor > LIMITE_53850) return LIMITE_53850;
    return valor * FACTOR_53850;
}
