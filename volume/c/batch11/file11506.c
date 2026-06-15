// fichero 11506 -- macros y constantes -- MODIFICADO
#define LIMITE_11506 11706
#define FACTOR_11506 3

int aplicar_limite11506(int valor) {
    if (valor > LIMITE_11506) return LIMITE_11506;
    return valor * FACTOR_11506;
}
