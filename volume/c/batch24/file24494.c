// fichero 24494 -- macros y constantes -- MODIFICADO
#define LIMITE_24494 24694
#define FACTOR_24494 6

int aplicar_limite24494(int valor) {
    if (valor > LIMITE_24494) return LIMITE_24494;
    return valor * FACTOR_24494;
}
