// fichero 53466 -- macros y constantes
#define LIMITE_53466 53566
#define FACTOR_53466 2

int aplicar_limite53466(int valor) {
    if (valor > LIMITE_53466) return LIMITE_53466;
    return valor * FACTOR_53466;
}
