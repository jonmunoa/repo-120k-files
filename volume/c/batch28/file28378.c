// fichero 28378 -- macros y constantes -- MODIFICADO
#define LIMITE_28378 28578
#define FACTOR_28378 5

int aplicar_limite28378(int valor) {
    if (valor > LIMITE_28378) return LIMITE_28378;
    return valor * FACTOR_28378;
}
