// fichero 5186 -- macros y constantes -- MODIFICADO
#define LIMITE_5186 5386
#define FACTOR_5186 3

int aplicar_limite5186(int valor) {
    if (valor > LIMITE_5186) return LIMITE_5186;
    return valor * FACTOR_5186;
}
