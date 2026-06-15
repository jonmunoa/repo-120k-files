// fichero 18466 -- macros y constantes -- MODIFICADO
#define LIMITE_18466 18666
#define FACTOR_18466 3

int aplicar_limite18466(int valor) {
    if (valor > LIMITE_18466) return LIMITE_18466;
    return valor * FACTOR_18466;
}
