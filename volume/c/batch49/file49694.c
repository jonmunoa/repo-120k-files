// fichero 49694 -- macros y constantes -- MODIFICADO
#define LIMITE_49694 49894
#define FACTOR_49694 6

int aplicar_limite49694(int valor) {
    if (valor > LIMITE_49694) return LIMITE_49694;
    return valor * FACTOR_49694;
}
