// fichero 22186 -- macros y constantes
#define LIMITE_22186 22286
#define FACTOR_22186 2

int aplicar_limite22186(int valor) {
    if (valor > LIMITE_22186) return LIMITE_22186;
    return valor * FACTOR_22186;
}
