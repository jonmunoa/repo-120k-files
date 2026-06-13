// fichero 50418 -- macros y constantes
#define LIMITE_50418 50518
#define FACTOR_50418 4

int aplicar_limite50418(int valor) {
    if (valor > LIMITE_50418) return LIMITE_50418;
    return valor * FACTOR_50418;
}
