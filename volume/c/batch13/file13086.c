// fichero 13086 -- macros y constantes -- MODIFICADO
#define LIMITE_13086 13286
#define FACTOR_13086 3

int aplicar_limite13086(int valor) {
    if (valor > LIMITE_13086) return LIMITE_13086;
    return valor * FACTOR_13086;
}
