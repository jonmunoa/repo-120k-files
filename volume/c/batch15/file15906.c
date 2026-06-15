// fichero 15906 -- macros y constantes -- MODIFICADO
#define LIMITE_15906 16106
#define FACTOR_15906 3

int aplicar_limite15906(int valor) {
    if (valor > LIMITE_15906) return LIMITE_15906;
    return valor * FACTOR_15906;
}
