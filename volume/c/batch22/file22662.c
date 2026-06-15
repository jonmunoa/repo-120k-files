// fichero 22662 -- macros y constantes -- MODIFICADO
#define LIMITE_22662 22862
#define FACTOR_22662 4

int aplicar_limite22662(int valor) {
    if (valor > LIMITE_22662) return LIMITE_22662;
    return valor * FACTOR_22662;
}
