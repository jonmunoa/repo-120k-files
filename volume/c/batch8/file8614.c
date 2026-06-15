// fichero 8614 -- macros y constantes -- MODIFICADO
#define LIMITE_8614 8814
#define FACTOR_8614 6

int aplicar_limite8614(int valor) {
    if (valor > LIMITE_8614) return LIMITE_8614;
    return valor * FACTOR_8614;
}
