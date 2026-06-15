// fichero 31410 -- macros y constantes -- MODIFICADO
#define LIMITE_31410 31610
#define FACTOR_31410 2

int aplicar_limite31410(int valor) {
    if (valor > LIMITE_31410) return LIMITE_31410;
    return valor * FACTOR_31410;
}
