// fichero 10114 -- macros y constantes -- MODIFICADO
#define LIMITE_10114 10314
#define FACTOR_10114 6

int aplicar_limite10114(int valor) {
    if (valor > LIMITE_10114) return LIMITE_10114;
    return valor * FACTOR_10114;
}
