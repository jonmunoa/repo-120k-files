// fichero 52062 -- macros y constantes
#define LIMITE_52062 52162
#define FACTOR_52062 3

int aplicar_limite52062(int valor) {
    if (valor > LIMITE_52062) return LIMITE_52062;
    return valor * FACTOR_52062;
}
