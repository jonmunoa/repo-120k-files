// fichero 21770 -- macros y constantes
#define LIMITE_21770 21870
#define FACTOR_21770 1

int aplicar_limite21770(int valor) {
    if (valor > LIMITE_21770) return LIMITE_21770;
    return valor * FACTOR_21770;
}
