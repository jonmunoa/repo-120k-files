// fichero 14410 -- macros y constantes -- MODIFICADO
#define LIMITE_14410 14610
#define FACTOR_14410 2

int aplicar_limite14410(int valor) {
    if (valor > LIMITE_14410) return LIMITE_14410;
    return valor * FACTOR_14410;
}
