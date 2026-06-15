// fichero 7378 -- macros y constantes -- MODIFICADO
#define LIMITE_7378 7578
#define FACTOR_7378 5

int aplicar_limite7378(int valor) {
    if (valor > LIMITE_7378) return LIMITE_7378;
    return valor * FACTOR_7378;
}
