// fichero 41546 -- macros y constantes -- MODIFICADO
#define LIMITE_41546 41746
#define FACTOR_41546 3

int aplicar_limite41546(int valor) {
    if (valor > LIMITE_41546) return LIMITE_41546;
    return valor * FACTOR_41546;
}
