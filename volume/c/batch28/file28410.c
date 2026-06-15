// fichero 28410 -- macros y constantes -- MODIFICADO
#define LIMITE_28410 28610
#define FACTOR_28410 2

int aplicar_limite28410(int valor) {
    if (valor > LIMITE_28410) return LIMITE_28410;
    return valor * FACTOR_28410;
}
