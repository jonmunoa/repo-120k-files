// fichero 18426 -- macros y constantes -- MODIFICADO
#define LIMITE_18426 18626
#define FACTOR_18426 3

int aplicar_limite18426(int valor) {
    if (valor > LIMITE_18426) return LIMITE_18426;
    return valor * FACTOR_18426;
}
