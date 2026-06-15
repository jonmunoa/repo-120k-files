// fichero 32110 -- macros y constantes -- MODIFICADO
#define LIMITE_32110 32310
#define FACTOR_32110 2

int aplicar_limite32110(int valor) {
    if (valor > LIMITE_32110) return LIMITE_32110;
    return valor * FACTOR_32110;
}
