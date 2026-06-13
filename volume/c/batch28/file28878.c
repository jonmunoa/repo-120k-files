// fichero 28878 -- macros y constantes
#define LIMITE_28878 28978
#define FACTOR_28878 4

int aplicar_limite28878(int valor) {
    if (valor > LIMITE_28878) return LIMITE_28878;
    return valor * FACTOR_28878;
}
