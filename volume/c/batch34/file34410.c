// fichero 34410 -- macros y constantes -- MODIFICADO
#define LIMITE_34410 34610
#define FACTOR_34410 2

int aplicar_limite34410(int valor) {
    if (valor > LIMITE_34410) return LIMITE_34410;
    return valor * FACTOR_34410;
}
