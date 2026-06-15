// fichero 10506 -- macros y constantes -- MODIFICADO
#define LIMITE_10506 10706
#define FACTOR_10506 3

int aplicar_limite10506(int valor) {
    if (valor > LIMITE_10506) return LIMITE_10506;
    return valor * FACTOR_10506;
}
