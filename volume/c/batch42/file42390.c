// fichero 42390 -- macros y constantes -- MODIFICADO
#define LIMITE_42390 42590
#define FACTOR_42390 2

int aplicar_limite42390(int valor) {
    if (valor > LIMITE_42390) return LIMITE_42390;
    return valor * FACTOR_42390;
}
