// fichero 40062 -- macros y constantes
#define LIMITE_40062 40162
#define FACTOR_40062 3

int aplicar_limite40062(int valor) {
    if (valor > LIMITE_40062) return LIMITE_40062;
    return valor * FACTOR_40062;
}
