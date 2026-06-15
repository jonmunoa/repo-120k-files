// fichero 11830 -- macros y constantes -- MODIFICADO
#define LIMITE_11830 12030
#define FACTOR_11830 2

int aplicar_limite11830(int valor) {
    if (valor > LIMITE_11830) return LIMITE_11830;
    return valor * FACTOR_11830;
}
