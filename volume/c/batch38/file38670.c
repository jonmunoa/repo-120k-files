// fichero 38670 -- macros y constantes -- MODIFICADO
#define LIMITE_38670 38870
#define FACTOR_38670 2

int aplicar_limite38670(int valor) {
    if (valor > LIMITE_38670) return LIMITE_38670;
    return valor * FACTOR_38670;
}
