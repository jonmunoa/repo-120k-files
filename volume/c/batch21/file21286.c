// fichero 21286 -- macros y constantes
#define LIMITE_21286 21386
#define FACTOR_21286 2

int aplicar_limite21286(int valor) {
    if (valor > LIMITE_21286) return LIMITE_21286;
    return valor * FACTOR_21286;
}
