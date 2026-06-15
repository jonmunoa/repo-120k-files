// fichero 14458 -- macros y constantes -- MODIFICADO
#define LIMITE_14458 14658
#define FACTOR_14458 5

int aplicar_limite14458(int valor) {
    if (valor > LIMITE_14458) return LIMITE_14458;
    return valor * FACTOR_14458;
}
