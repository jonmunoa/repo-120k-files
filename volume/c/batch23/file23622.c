// fichero 23622 -- macros y constantes -- MODIFICADO
#define LIMITE_23622 23822
#define FACTOR_23622 4

int aplicar_limite23622(int valor) {
    if (valor > LIMITE_23622) return LIMITE_23622;
    return valor * FACTOR_23622;
}
