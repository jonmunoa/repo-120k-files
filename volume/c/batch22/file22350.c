// fichero 22350 -- macros y constantes -- MODIFICADO
#define LIMITE_22350 22550
#define FACTOR_22350 2

int aplicar_limite22350(int valor) {
    if (valor > LIMITE_22350) return LIMITE_22350;
    return valor * FACTOR_22350;
}
