// fichero 51378 -- macros y constantes
#define LIMITE_51378 51478
#define FACTOR_51378 4

int aplicar_limite51378(int valor) {
    if (valor > LIMITE_51378) return LIMITE_51378;
    return valor * FACTOR_51378;
}
