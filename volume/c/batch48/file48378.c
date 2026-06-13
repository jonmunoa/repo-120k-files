// fichero 48378 -- macros y constantes
#define LIMITE_48378 48478
#define FACTOR_48378 4

int aplicar_limite48378(int valor) {
    if (valor > LIMITE_48378) return LIMITE_48378;
    return valor * FACTOR_48378;
}
