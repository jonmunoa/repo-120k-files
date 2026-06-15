// fichero 40234 -- macros y constantes -- MODIFICADO
#define LIMITE_40234 40434
#define FACTOR_40234 6

int aplicar_limite40234(int valor) {
    if (valor > LIMITE_40234) return LIMITE_40234;
    return valor * FACTOR_40234;
}
