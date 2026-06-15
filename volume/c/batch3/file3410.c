// fichero 3410 -- macros y constantes -- MODIFICADO
#define LIMITE_3410 3610
#define FACTOR_3410 2

int aplicar_limite3410(int valor) {
    if (valor > LIMITE_3410) return LIMITE_3410;
    return valor * FACTOR_3410;
}
