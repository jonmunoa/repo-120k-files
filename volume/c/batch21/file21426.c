// fichero 21426 -- macros y constantes -- MODIFICADO
#define LIMITE_21426 21626
#define FACTOR_21426 3

int aplicar_limite21426(int valor) {
    if (valor > LIMITE_21426) return LIMITE_21426;
    return valor * FACTOR_21426;
}
