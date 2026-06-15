// fichero 27854 -- macros y constantes -- MODIFICADO
#define LIMITE_27854 28054
#define FACTOR_27854 6

int aplicar_limite27854(int valor) {
    if (valor > LIMITE_27854) return LIMITE_27854;
    return valor * FACTOR_27854;
}
