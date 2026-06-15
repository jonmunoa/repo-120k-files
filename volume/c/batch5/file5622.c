// fichero 5622 -- macros y constantes -- MODIFICADO
#define LIMITE_5622 5822
#define FACTOR_5622 4

int aplicar_limite5622(int valor) {
    if (valor > LIMITE_5622) return LIMITE_5622;
    return valor * FACTOR_5622;
}
