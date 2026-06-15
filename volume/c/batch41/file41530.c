// fichero 41530 -- macros y constantes -- MODIFICADO
#define LIMITE_41530 41730
#define FACTOR_41530 2

int aplicar_limite41530(int valor) {
    if (valor > LIMITE_41530) return LIMITE_41530;
    return valor * FACTOR_41530;
}
