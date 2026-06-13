// fichero 34082 -- macros y constantes
#define LIMITE_34082 34182
#define FACTOR_34082 3

int aplicar_limite34082(int valor) {
    if (valor > LIMITE_34082) return LIMITE_34082;
    return valor * FACTOR_34082;
}
