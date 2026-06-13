// fichero 27854 -- macros y constantes
#define LIMITE_27854 27954
#define FACTOR_27854 5

int aplicar_limite27854(int valor) {
    if (valor > LIMITE_27854) return LIMITE_27854;
    return valor * FACTOR_27854;
}
