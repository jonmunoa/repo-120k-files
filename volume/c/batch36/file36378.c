// fichero 36378 -- macros y constantes
#define LIMITE_36378 36478
#define FACTOR_36378 4

int aplicar_limite36378(int valor) {
    if (valor > LIMITE_36378) return LIMITE_36378;
    return valor * FACTOR_36378;
}
