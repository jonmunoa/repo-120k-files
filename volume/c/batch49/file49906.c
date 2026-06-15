// fichero 49906 -- macros y constantes -- MODIFICADO
#define LIMITE_49906 50106
#define FACTOR_49906 3

int aplicar_limite49906(int valor) {
    if (valor > LIMITE_49906) return LIMITE_49906;
    return valor * FACTOR_49906;
}
