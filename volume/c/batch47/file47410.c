// fichero 47410 -- macros y constantes -- MODIFICADO
#define LIMITE_47410 47610
#define FACTOR_47410 2

int aplicar_limite47410(int valor) {
    if (valor > LIMITE_47410) return LIMITE_47410;
    return valor * FACTOR_47410;
}
