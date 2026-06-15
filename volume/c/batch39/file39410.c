// fichero 39410 -- macros y constantes -- MODIFICADO
#define LIMITE_39410 39610
#define FACTOR_39410 2

int aplicar_limite39410(int valor) {
    if (valor > LIMITE_39410) return LIMITE_39410;
    return valor * FACTOR_39410;
}
