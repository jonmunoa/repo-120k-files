// fichero 17430 -- macros y constantes -- MODIFICADO
#define LIMITE_17430 17630
#define FACTOR_17430 2

int aplicar_limite17430(int valor) {
    if (valor > LIMITE_17430) return LIMITE_17430;
    return valor * FACTOR_17430;
}
