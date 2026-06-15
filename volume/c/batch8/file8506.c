// fichero 8506 -- macros y constantes -- MODIFICADO
#define LIMITE_8506 8706
#define FACTOR_8506 3

int aplicar_limite8506(int valor) {
    if (valor > LIMITE_8506) return LIMITE_8506;
    return valor * FACTOR_8506;
}
