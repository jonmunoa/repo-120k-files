// fichero 18510 -- macros y constantes -- MODIFICADO
#define LIMITE_18510 18710
#define FACTOR_18510 2

int aplicar_limite18510(int valor) {
    if (valor > LIMITE_18510) return LIMITE_18510;
    return valor * FACTOR_18510;
}
