// fichero 46622 -- macros y constantes -- MODIFICADO
#define LIMITE_46622 46822
#define FACTOR_46622 4

int aplicar_limite46622(int valor) {
    if (valor > LIMITE_46622) return LIMITE_46622;
    return valor * FACTOR_46622;
}
