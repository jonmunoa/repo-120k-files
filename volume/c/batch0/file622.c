// fichero 622 -- macros y constantes -- MODIFICADO
#define LIMITE_622 822
#define FACTOR_622 4

int aplicar_limite622(int valor) {
    if (valor > LIMITE_622) return LIMITE_622;
    return valor * FACTOR_622;
}
