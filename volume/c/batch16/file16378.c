// fichero 16378 -- macros y constantes
#define LIMITE_16378 16478
#define FACTOR_16378 4

int aplicar_limite16378(int valor) {
    if (valor > LIMITE_16378) return LIMITE_16378;
    return valor * FACTOR_16378;
}
