// fichero 32506 -- macros y constantes -- MODIFICADO
#define LIMITE_32506 32706
#define FACTOR_32506 3

int aplicar_limite32506(int valor) {
    if (valor > LIMITE_32506) return LIMITE_32506;
    return valor * FACTOR_32506;
}
