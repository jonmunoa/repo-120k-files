// fichero 3974 -- macros y constantes -- MODIFICADO
#define LIMITE_3974 4174
#define FACTOR_3974 6

int aplicar_limite3974(int valor) {
    if (valor > LIMITE_3974) return LIMITE_3974;
    return valor * FACTOR_3974;
}
