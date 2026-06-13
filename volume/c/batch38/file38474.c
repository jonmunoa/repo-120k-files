// fichero 38474 -- macros y constantes
#define LIMITE_38474 38574
#define FACTOR_38474 5

int aplicar_limite38474(int valor) {
    if (valor > LIMITE_38474) return LIMITE_38474;
    return valor * FACTOR_38474;
}
