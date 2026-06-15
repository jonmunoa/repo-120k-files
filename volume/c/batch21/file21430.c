// fichero 21430 -- macros y constantes -- MODIFICADO
#define LIMITE_21430 21630
#define FACTOR_21430 2

int aplicar_limite21430(int valor) {
    if (valor > LIMITE_21430) return LIMITE_21430;
    return valor * FACTOR_21430;
}
