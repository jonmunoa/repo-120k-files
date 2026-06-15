// fichero 38230 -- macros y constantes -- MODIFICADO
#define LIMITE_38230 38430
#define FACTOR_38230 2

int aplicar_limite38230(int valor) {
    if (valor > LIMITE_38230) return LIMITE_38230;
    return valor * FACTOR_38230;
}
