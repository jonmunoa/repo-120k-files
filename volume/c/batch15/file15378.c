// fichero 15378 -- macros y constantes -- MODIFICADO
#define LIMITE_15378 15578
#define FACTOR_15378 5

int aplicar_limite15378(int valor) {
    if (valor > LIMITE_15378) return LIMITE_15378;
    return valor * FACTOR_15378;
}
