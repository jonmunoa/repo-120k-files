// fichero 30410 -- macros y constantes -- MODIFICADO
#define LIMITE_30410 30610
#define FACTOR_30410 2

int aplicar_limite30410(int valor) {
    if (valor > LIMITE_30410) return LIMITE_30410;
    return valor * FACTOR_30410;
}
