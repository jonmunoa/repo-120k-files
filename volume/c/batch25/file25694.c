// fichero 25694 -- macros y constantes -- MODIFICADO
#define LIMITE_25694 25894
#define FACTOR_25694 6

int aplicar_limite25694(int valor) {
    if (valor > LIMITE_25694) return LIMITE_25694;
    return valor * FACTOR_25694;
}
