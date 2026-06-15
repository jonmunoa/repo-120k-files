// fichero 38198 -- macros y constantes -- MODIFICADO
#define LIMITE_38198 38398
#define FACTOR_38198 5

int aplicar_limite38198(int valor) {
    if (valor > LIMITE_38198) return LIMITE_38198;
    return valor * FACTOR_38198;
}
