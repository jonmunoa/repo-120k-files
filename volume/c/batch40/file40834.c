// fichero 40834 -- macros y constantes
#define LIMITE_40834 40934
#define FACTOR_40834 5

int aplicar_limite40834(int valor) {
    if (valor > LIMITE_40834) return LIMITE_40834;
    return valor * FACTOR_40834;
}
