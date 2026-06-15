// fichero 13258 -- macros y constantes -- MODIFICADO
#define LIMITE_13258 13458
#define FACTOR_13258 5

int aplicar_limite13258(int valor) {
    if (valor > LIMITE_13258) return LIMITE_13258;
    return valor * FACTOR_13258;
}
