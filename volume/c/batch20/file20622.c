// fichero 20622 -- macros y constantes -- MODIFICADO
#define LIMITE_20622 20822
#define FACTOR_20622 4

int aplicar_limite20622(int valor) {
    if (valor > LIMITE_20622) return LIMITE_20622;
    return valor * FACTOR_20622;
}
