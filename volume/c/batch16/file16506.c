// fichero 16506 -- macros y constantes -- MODIFICADO
#define LIMITE_16506 16706
#define FACTOR_16506 3

int aplicar_limite16506(int valor) {
    if (valor > LIMITE_16506) return LIMITE_16506;
    return valor * FACTOR_16506;
}
