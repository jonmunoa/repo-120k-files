// fichero 6906 -- macros y constantes -- MODIFICADO
#define LIMITE_6906 7106
#define FACTOR_6906 3

int aplicar_limite6906(int valor) {
    if (valor > LIMITE_6906) return LIMITE_6906;
    return valor * FACTOR_6906;
}
