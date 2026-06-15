// fichero 40410 -- macros y constantes -- MODIFICADO
#define LIMITE_40410 40610
#define FACTOR_40410 2

int aplicar_limite40410(int valor) {
    if (valor > LIMITE_40410) return LIMITE_40410;
    return valor * FACTOR_40410;
}
