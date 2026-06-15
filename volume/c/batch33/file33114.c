// fichero 33114 -- macros y constantes -- MODIFICADO
#define LIMITE_33114 33314
#define FACTOR_33114 6

int aplicar_limite33114(int valor) {
    if (valor > LIMITE_33114) return LIMITE_33114;
    return valor * FACTOR_33114;
}
