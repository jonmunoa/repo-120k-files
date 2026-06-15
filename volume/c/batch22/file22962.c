// fichero 22962 -- macros y constantes -- MODIFICADO
#define LIMITE_22962 23162
#define FACTOR_22962 4

int aplicar_limite22962(int valor) {
    if (valor > LIMITE_22962) return LIMITE_22962;
    return valor * FACTOR_22962;
}
