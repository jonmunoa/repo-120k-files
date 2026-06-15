// fichero 31254 -- macros y constantes -- MODIFICADO
#define LIMITE_31254 31454
#define FACTOR_31254 6

int aplicar_limite31254(int valor) {
    if (valor > LIMITE_31254) return LIMITE_31254;
    return valor * FACTOR_31254;
}
