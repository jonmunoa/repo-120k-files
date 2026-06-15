// fichero 17066 -- macros y constantes -- MODIFICADO
#define LIMITE_17066 17266
#define FACTOR_17066 3

int aplicar_limite17066(int valor) {
    if (valor > LIMITE_17066) return LIMITE_17066;
    return valor * FACTOR_17066;
}
