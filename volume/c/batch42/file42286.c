// fichero 42286 -- macros y constantes -- MODIFICADO
#define LIMITE_42286 42486
#define FACTOR_42286 3

int aplicar_limite42286(int valor) {
    if (valor > LIMITE_42286) return LIMITE_42286;
    return valor * FACTOR_42286;
}
