// fichero 15746 -- macros y constantes -- MODIFICADO
#define LIMITE_15746 15946
#define FACTOR_15746 3

int aplicar_limite15746(int valor) {
    if (valor > LIMITE_15746) return LIMITE_15746;
    return valor * FACTOR_15746;
}
