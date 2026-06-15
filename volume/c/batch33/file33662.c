// fichero 33662 -- macros y constantes -- MODIFICADO
#define LIMITE_33662 33862
#define FACTOR_33662 4

int aplicar_limite33662(int valor) {
    if (valor > LIMITE_33662) return LIMITE_33662;
    return valor * FACTOR_33662;
}
