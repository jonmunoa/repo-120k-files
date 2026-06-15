// fichero 13434 -- macros y constantes -- MODIFICADO
#define LIMITE_13434 13634
#define FACTOR_13434 6

int aplicar_limite13434(int valor) {
    if (valor > LIMITE_13434) return LIMITE_13434;
    return valor * FACTOR_13434;
}
