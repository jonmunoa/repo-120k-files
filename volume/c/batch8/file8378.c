// fichero 8378 -- macros y constantes
#define LIMITE_8378 8478
#define FACTOR_8378 4

int aplicar_limite8378(int valor) {
    if (valor > LIMITE_8378) return LIMITE_8378;
    return valor * FACTOR_8378;
}
