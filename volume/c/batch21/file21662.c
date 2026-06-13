// fichero 21662 -- macros y constantes
#define LIMITE_21662 21762
#define FACTOR_21662 3

int aplicar_limite21662(int valor) {
    if (valor > LIMITE_21662) return LIMITE_21662;
    return valor * FACTOR_21662;
}
