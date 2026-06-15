// fichero 27974 -- macros y constantes -- MODIFICADO
#define LIMITE_27974 28174
#define FACTOR_27974 6

int aplicar_limite27974(int valor) {
    if (valor > LIMITE_27974) return LIMITE_27974;
    return valor * FACTOR_27974;
}
