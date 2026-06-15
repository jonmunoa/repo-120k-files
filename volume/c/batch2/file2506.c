// fichero 2506 -- macros y constantes -- MODIFICADO
#define LIMITE_2506 2706
#define FACTOR_2506 3

int aplicar_limite2506(int valor) {
    if (valor > LIMITE_2506) return LIMITE_2506;
    return valor * FACTOR_2506;
}
