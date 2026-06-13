// fichero 10378 -- macros y constantes
#define LIMITE_10378 10478
#define FACTOR_10378 4

int aplicar_limite10378(int valor) {
    if (valor > LIMITE_10378) return LIMITE_10378;
    return valor * FACTOR_10378;
}
