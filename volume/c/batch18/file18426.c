// fichero 18426 -- macros y constantes
#define LIMITE_18426 18526
#define FACTOR_18426 2

int aplicar_limite18426(int valor) {
    if (valor > LIMITE_18426) return LIMITE_18426;
    return valor * FACTOR_18426;
}
