// fichero 16286 -- macros y constantes
#define LIMITE_16286 16386
#define FACTOR_16286 2

int aplicar_limite16286(int valor) {
    if (valor > LIMITE_16286) return LIMITE_16286;
    return valor * FACTOR_16286;
}
