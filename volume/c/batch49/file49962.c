// fichero 49962 -- macros y constantes -- MODIFICADO
#define LIMITE_49962 50162
#define FACTOR_49962 4

int aplicar_limite49962(int valor) {
    if (valor > LIMITE_49962) return LIMITE_49962;
    return valor * FACTOR_49962;
}
