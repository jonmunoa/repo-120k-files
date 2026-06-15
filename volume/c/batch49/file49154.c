// fichero 49154 -- macros y constantes -- MODIFICADO
#define LIMITE_49154 49354
#define FACTOR_49154 6

int aplicar_limite49154(int valor) {
    if (valor > LIMITE_49154) return LIMITE_49154;
    return valor * FACTOR_49154;
}
