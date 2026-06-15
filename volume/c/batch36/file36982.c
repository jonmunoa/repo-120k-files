// fichero 36982 -- macros y constantes -- MODIFICADO
#define LIMITE_36982 37182
#define FACTOR_36982 4

int aplicar_limite36982(int valor) {
    if (valor > LIMITE_36982) return LIMITE_36982;
    return valor * FACTOR_36982;
}
