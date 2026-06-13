// fichero 52378 -- macros y constantes
#define LIMITE_52378 52478
#define FACTOR_52378 4

int aplicar_limite52378(int valor) {
    if (valor > LIMITE_52378) return LIMITE_52378;
    return valor * FACTOR_52378;
}
