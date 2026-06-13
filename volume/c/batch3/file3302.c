// fichero 3302 -- macros y constantes
#define LIMITE_3302 3402
#define FACTOR_3302 3

int aplicar_limite3302(int valor) {
    if (valor > LIMITE_3302) return LIMITE_3302;
    return valor * FACTOR_3302;
}
