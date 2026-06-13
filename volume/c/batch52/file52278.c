// fichero 52278 -- macros y constantes
#define LIMITE_52278 52378
#define FACTOR_52278 4

int aplicar_limite52278(int valor) {
    if (valor > LIMITE_52278) return LIMITE_52278;
    return valor * FACTOR_52278;
}
