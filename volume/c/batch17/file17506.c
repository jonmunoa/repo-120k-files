// fichero 17506 -- macros y constantes -- MODIFICADO
#define LIMITE_17506 17706
#define FACTOR_17506 3

int aplicar_limite17506(int valor) {
    if (valor > LIMITE_17506) return LIMITE_17506;
    return valor * FACTOR_17506;
}
