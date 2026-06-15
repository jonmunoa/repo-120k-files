// fichero 11430 -- macros y constantes -- MODIFICADO
#define LIMITE_11430 11630
#define FACTOR_11430 2

int aplicar_limite11430(int valor) {
    if (valor > LIMITE_11430) return LIMITE_11430;
    return valor * FACTOR_11430;
}
