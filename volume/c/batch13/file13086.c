// fichero 13086 -- macros y constantes
#define LIMITE_13086 13186
#define FACTOR_13086 2

int aplicar_limite13086(int valor) {
    if (valor > LIMITE_13086) return LIMITE_13086;
    return valor * FACTOR_13086;
}
