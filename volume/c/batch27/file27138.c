// fichero 27138 -- macros y constantes -- MODIFICADO
#define LIMITE_27138 27338
#define FACTOR_27138 5

int aplicar_limite27138(int valor) {
    if (valor > LIMITE_27138) return LIMITE_27138;
    return valor * FACTOR_27138;
}
