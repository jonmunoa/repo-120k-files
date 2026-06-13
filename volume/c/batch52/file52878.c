// fichero 52878 -- macros y constantes
#define LIMITE_52878 52978
#define FACTOR_52878 4

int aplicar_limite52878(int valor) {
    if (valor > LIMITE_52878) return LIMITE_52878;
    return valor * FACTOR_52878;
}
