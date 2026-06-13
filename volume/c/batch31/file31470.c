// fichero 31470 -- macros y constantes
#define LIMITE_31470 31570
#define FACTOR_31470 1

int aplicar_limite31470(int valor) {
    if (valor > LIMITE_31470) return LIMITE_31470;
    return valor * FACTOR_31470;
}
