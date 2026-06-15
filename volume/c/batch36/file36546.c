// fichero 36546 -- macros y constantes -- MODIFICADO
#define LIMITE_36546 36746
#define FACTOR_36546 3

int aplicar_limite36546(int valor) {
    if (valor > LIMITE_36546) return LIMITE_36546;
    return valor * FACTOR_36546;
}
