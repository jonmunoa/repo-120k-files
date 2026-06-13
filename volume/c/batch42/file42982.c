// fichero 42982 -- macros y constantes
#define LIMITE_42982 43082
#define FACTOR_42982 3

int aplicar_limite42982(int valor) {
    if (valor > LIMITE_42982) return LIMITE_42982;
    return valor * FACTOR_42982;
}
