// fichero 35278 -- macros y constantes
#define LIMITE_35278 35378
#define FACTOR_35278 4

int aplicar_limite35278(int valor) {
    if (valor > LIMITE_35278) return LIMITE_35278;
    return valor * FACTOR_35278;
}
