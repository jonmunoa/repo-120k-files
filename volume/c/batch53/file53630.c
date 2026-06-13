// fichero 53630 -- macros y constantes
#define LIMITE_53630 53730
#define FACTOR_53630 1

int aplicar_limite53630(int valor) {
    if (valor > LIMITE_53630) return LIMITE_53630;
    return valor * FACTOR_53630;
}
