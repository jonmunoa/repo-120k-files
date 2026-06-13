// fichero 12986 -- macros y constantes
#define LIMITE_12986 13086
#define FACTOR_12986 2

int aplicar_limite12986(int valor) {
    if (valor > LIMITE_12986) return LIMITE_12986;
    return valor * FACTOR_12986;
}
