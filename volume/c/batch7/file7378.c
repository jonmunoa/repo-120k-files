// fichero 7378 -- macros y constantes
#define LIMITE_7378 7478
#define FACTOR_7378 4

int aplicar_limite7378(int valor) {
    if (valor > LIMITE_7378) return LIMITE_7378;
    return valor * FACTOR_7378;
}
