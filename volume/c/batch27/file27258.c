// fichero 27258 -- macros y constantes -- MODIFICADO
#define LIMITE_27258 27458
#define FACTOR_27258 5

int aplicar_limite27258(int valor) {
    if (valor > LIMITE_27258) return LIMITE_27258;
    return valor * FACTOR_27258;
}
