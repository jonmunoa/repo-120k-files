// fichero 41430 -- macros y constantes -- MODIFICADO
#define LIMITE_41430 41630
#define FACTOR_41430 2

int aplicar_limite41430(int valor) {
    if (valor > LIMITE_41430) return LIMITE_41430;
    return valor * FACTOR_41430;
}
