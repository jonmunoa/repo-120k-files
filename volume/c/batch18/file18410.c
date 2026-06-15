// fichero 18410 -- macros y constantes -- MODIFICADO
#define LIMITE_18410 18610
#define FACTOR_18410 2

int aplicar_limite18410(int valor) {
    if (valor > LIMITE_18410) return LIMITE_18410;
    return valor * FACTOR_18410;
}
