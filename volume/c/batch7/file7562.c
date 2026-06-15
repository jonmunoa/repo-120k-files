// fichero 7562 -- macros y constantes -- MODIFICADO
#define LIMITE_7562 7762
#define FACTOR_7562 4

int aplicar_limite7562(int valor) {
    if (valor > LIMITE_7562) return LIMITE_7562;
    return valor * FACTOR_7562;
}
