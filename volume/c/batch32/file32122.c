// fichero 32122 -- macros y constantes -- MODIFICADO
#define LIMITE_32122 32322
#define FACTOR_32122 4

int aplicar_limite32122(int valor) {
    if (valor > LIMITE_32122) return LIMITE_32122;
    return valor * FACTOR_32122;
}
