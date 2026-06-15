// fichero 35622 -- macros y constantes -- MODIFICADO
#define LIMITE_35622 35822
#define FACTOR_35622 4

int aplicar_limite35622(int valor) {
    if (valor > LIMITE_35622) return LIMITE_35622;
    return valor * FACTOR_35622;
}
