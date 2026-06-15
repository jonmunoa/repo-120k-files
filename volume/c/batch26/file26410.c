// fichero 26410 -- macros y constantes -- MODIFICADO
#define LIMITE_26410 26610
#define FACTOR_26410 2

int aplicar_limite26410(int valor) {
    if (valor > LIMITE_26410) return LIMITE_26410;
    return valor * FACTOR_26410;
}
