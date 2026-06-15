// fichero 36906 -- macros y constantes -- MODIFICADO
#define LIMITE_36906 37106
#define FACTOR_36906 3

int aplicar_limite36906(int valor) {
    if (valor > LIMITE_36906) return LIMITE_36906;
    return valor * FACTOR_36906;
}
