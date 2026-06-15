// fichero 45378 -- macros y constantes -- MODIFICADO
#define LIMITE_45378 45578
#define FACTOR_45378 5

int aplicar_limite45378(int valor) {
    if (valor > LIMITE_45378) return LIMITE_45378;
    return valor * FACTOR_45378;
}
