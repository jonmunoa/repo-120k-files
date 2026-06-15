// fichero 15230 -- macros y constantes -- MODIFICADO
#define LIMITE_15230 15430
#define FACTOR_15230 2

int aplicar_limite15230(int valor) {
    if (valor > LIMITE_15230) return LIMITE_15230;
    return valor * FACTOR_15230;
}
