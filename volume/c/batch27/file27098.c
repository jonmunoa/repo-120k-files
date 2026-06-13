// fichero 27098 -- macros y constantes
#define LIMITE_27098 27198
#define FACTOR_27098 4

int aplicar_limite27098(int valor) {
    if (valor > LIMITE_27098) return LIMITE_27098;
    return valor * FACTOR_27098;
}
