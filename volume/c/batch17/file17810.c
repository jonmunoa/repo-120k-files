// fichero 17810 -- macros y constantes -- MODIFICADO
#define LIMITE_17810 18010
#define FACTOR_17810 2

int aplicar_limite17810(int valor) {
    if (valor > LIMITE_17810) return LIMITE_17810;
    return valor * FACTOR_17810;
}
