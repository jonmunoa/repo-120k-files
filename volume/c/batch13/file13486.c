// fichero 13486 -- macros y constantes -- MODIFICADO
#define LIMITE_13486 13686
#define FACTOR_13486 3

int aplicar_limite13486(int valor) {
    if (valor > LIMITE_13486) return LIMITE_13486;
    return valor * FACTOR_13486;
}
