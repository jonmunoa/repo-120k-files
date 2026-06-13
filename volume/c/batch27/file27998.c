// fichero 27998 -- macros y constantes
#define LIMITE_27998 28098
#define FACTOR_27998 4

int aplicar_limite27998(int valor) {
    if (valor > LIMITE_27998) return LIMITE_27998;
    return valor * FACTOR_27998;
}
