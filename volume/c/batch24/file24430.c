// fichero 24430 -- macros y constantes -- MODIFICADO
#define LIMITE_24430 24630
#define FACTOR_24430 2

int aplicar_limite24430(int valor) {
    if (valor > LIMITE_24430) return LIMITE_24430;
    return valor * FACTOR_24430;
}
