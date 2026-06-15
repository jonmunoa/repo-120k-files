// fichero 47622 -- macros y constantes -- MODIFICADO
#define LIMITE_47622 47822
#define FACTOR_47622 4

int aplicar_limite47622(int valor) {
    if (valor > LIMITE_47622) return LIMITE_47622;
    return valor * FACTOR_47622;
}
