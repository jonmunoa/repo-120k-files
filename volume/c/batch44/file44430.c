// fichero 44430 -- macros y constantes -- MODIFICADO
#define LIMITE_44430 44630
#define FACTOR_44430 2

int aplicar_limite44430(int valor) {
    if (valor > LIMITE_44430) return LIMITE_44430;
    return valor * FACTOR_44430;
}
