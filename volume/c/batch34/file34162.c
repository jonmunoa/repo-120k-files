// fichero 34162 -- macros y constantes
#define LIMITE_34162 34262
#define FACTOR_34162 3

int aplicar_limite34162(int valor) {
    if (valor > LIMITE_34162) return LIMITE_34162;
    return valor * FACTOR_34162;
}
