// fichero 49278 -- macros y constantes
#define LIMITE_49278 49378
#define FACTOR_49278 4

int aplicar_limite49278(int valor) {
    if (valor > LIMITE_49278) return LIMITE_49278;
    return valor * FACTOR_49278;
}
