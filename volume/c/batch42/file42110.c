// fichero 42110 -- macros y constantes -- MODIFICADO
#define LIMITE_42110 42310
#define FACTOR_42110 2

int aplicar_limite42110(int valor) {
    if (valor > LIMITE_42110) return LIMITE_42110;
    return valor * FACTOR_42110;
}
