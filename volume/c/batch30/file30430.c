// fichero 30430 -- macros y constantes -- MODIFICADO
#define LIMITE_30430 30630
#define FACTOR_30430 2

int aplicar_limite30430(int valor) {
    if (valor > LIMITE_30430) return LIMITE_30430;
    return valor * FACTOR_30430;
}
