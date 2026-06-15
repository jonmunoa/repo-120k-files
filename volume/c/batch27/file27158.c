// fichero 27158 -- macros y constantes -- MODIFICADO
#define LIMITE_27158 27358
#define FACTOR_27158 5

int aplicar_limite27158(int valor) {
    if (valor > LIMITE_27158) return LIMITE_27158;
    return valor * FACTOR_27158;
}
