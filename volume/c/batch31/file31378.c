// fichero 31378 -- macros y constantes -- MODIFICADO
#define LIMITE_31378 31578
#define FACTOR_31378 5

int aplicar_limite31378(int valor) {
    if (valor > LIMITE_31378) return LIMITE_31378;
    return valor * FACTOR_31378;
}
