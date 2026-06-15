// fichero 34978 -- macros y constantes -- MODIFICADO
#define LIMITE_34978 35178
#define FACTOR_34978 5

int aplicar_limite34978(int valor) {
    if (valor > LIMITE_34978) return LIMITE_34978;
    return valor * FACTOR_34978;
}
