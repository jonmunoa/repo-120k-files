// fichero 36502 -- macros y constantes
#define LIMITE_36502 36602
#define FACTOR_36502 3

int aplicar_limite36502(int valor) {
    if (valor > LIMITE_36502) return LIMITE_36502;
    return valor * FACTOR_36502;
}
