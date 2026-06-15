// fichero 49238 -- macros y constantes -- MODIFICADO
#define LIMITE_49238 49438
#define FACTOR_49238 5

int aplicar_limite49238(int valor) {
    if (valor > LIMITE_49238) return LIMITE_49238;
    return valor * FACTOR_49238;
}
