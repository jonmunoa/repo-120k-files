// fichero 66 -- macros y constantes -- MODIFICADO
#define LIMITE_66 266
#define FACTOR_66 3

int aplicar_limite66(int valor) {
    if (valor > LIMITE_66) return LIMITE_66;
    return valor * FACTOR_66;
}
