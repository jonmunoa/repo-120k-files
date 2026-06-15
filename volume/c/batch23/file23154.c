// fichero 23154 -- macros y constantes -- MODIFICADO
#define LIMITE_23154 23354
#define FACTOR_23154 6

int aplicar_limite23154(int valor) {
    if (valor > LIMITE_23154) return LIMITE_23154;
    return valor * FACTOR_23154;
}
