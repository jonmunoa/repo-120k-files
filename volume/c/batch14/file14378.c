// fichero 14378 -- macros y constantes -- MODIFICADO
#define LIMITE_14378 14578
#define FACTOR_14378 5

int aplicar_limite14378(int valor) {
    if (valor > LIMITE_14378) return LIMITE_14378;
    return valor * FACTOR_14378;
}
