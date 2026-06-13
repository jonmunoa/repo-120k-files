// fichero 48878 -- macros y constantes
#define LIMITE_48878 48978
#define FACTOR_48878 4

int aplicar_limite48878(int valor) {
    if (valor > LIMITE_48878) return LIMITE_48878;
    return valor * FACTOR_48878;
}
