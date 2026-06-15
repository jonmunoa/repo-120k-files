// fichero 40434 -- macros y constantes -- MODIFICADO
#define LIMITE_40434 40634
#define FACTOR_40434 6

int aplicar_limite40434(int valor) {
    if (valor > LIMITE_40434) return LIMITE_40434;
    return valor * FACTOR_40434;
}
