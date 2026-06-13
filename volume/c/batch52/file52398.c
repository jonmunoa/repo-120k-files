// fichero 52398 -- macros y constantes
#define LIMITE_52398 52498
#define FACTOR_52398 4

int aplicar_limite52398(int valor) {
    if (valor > LIMITE_52398) return LIMITE_52398;
    return valor * FACTOR_52398;
}
