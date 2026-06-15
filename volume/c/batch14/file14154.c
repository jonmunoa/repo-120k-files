// fichero 14154 -- macros y constantes -- MODIFICADO
#define LIMITE_14154 14354
#define FACTOR_14154 6

int aplicar_limite14154(int valor) {
    if (valor > LIMITE_14154) return LIMITE_14154;
    return valor * FACTOR_14154;
}
