// fichero 7278 -- macros y constantes
#define LIMITE_7278 7378
#define FACTOR_7278 4

int aplicar_limite7278(int valor) {
    if (valor > LIMITE_7278) return LIMITE_7278;
    return valor * FACTOR_7278;
}
