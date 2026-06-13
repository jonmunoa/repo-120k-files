// fichero 18350 -- macros y constantes
#define LIMITE_18350 18450
#define FACTOR_18350 1

int aplicar_limite18350(int valor) {
    if (valor > LIMITE_18350) return LIMITE_18350;
    return valor * FACTOR_18350;
}
