// fichero 5430 -- macros y constantes -- MODIFICADO
#define LIMITE_5430 5630
#define FACTOR_5430 2

int aplicar_limite5430(int valor) {
    if (valor > LIMITE_5430) return LIMITE_5430;
    return valor * FACTOR_5430;
}
