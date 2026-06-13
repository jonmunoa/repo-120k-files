// fichero 36154 -- macros y constantes
#define LIMITE_36154 36254
#define FACTOR_36154 5

int aplicar_limite36154(int valor) {
    if (valor > LIMITE_36154) return LIMITE_36154;
    return valor * FACTOR_36154;
}
