// fichero 41430 -- macros y constantes
#define LIMITE_41430 41530
#define FACTOR_41430 1

int aplicar_limite41430(int valor) {
    if (valor > LIMITE_41430) return LIMITE_41430;
    return valor * FACTOR_41430;
}
