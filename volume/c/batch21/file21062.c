// fichero 21062 -- macros y constantes
#define LIMITE_21062 21162
#define FACTOR_21062 3

int aplicar_limite21062(int valor) {
    if (valor > LIMITE_21062) return LIMITE_21062;
    return valor * FACTOR_21062;
}
