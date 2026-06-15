// fichero 26622 -- macros y constantes -- MODIFICADO
#define LIMITE_26622 26822
#define FACTOR_26622 4

int aplicar_limite26622(int valor) {
    if (valor > LIMITE_26622) return LIMITE_26622;
    return valor * FACTOR_26622;
}
