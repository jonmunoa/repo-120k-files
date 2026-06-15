// fichero 13410 -- macros y constantes -- MODIFICADO
#define LIMITE_13410 13610
#define FACTOR_13410 2

int aplicar_limite13410(int valor) {
    if (valor > LIMITE_13410) return LIMITE_13410;
    return valor * FACTOR_13410;
}
