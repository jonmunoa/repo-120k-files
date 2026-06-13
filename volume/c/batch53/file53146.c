// fichero 53146 -- macros y constantes
#define LIMITE_53146 53246
#define FACTOR_53146 2

int aplicar_limite53146(int valor) {
    if (valor > LIMITE_53146) return LIMITE_53146;
    return valor * FACTOR_53146;
}
