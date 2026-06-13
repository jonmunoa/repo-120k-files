// fichero 42830 -- macros y constantes
#define LIMITE_42830 42930
#define FACTOR_42830 1

int aplicar_limite42830(int valor) {
    if (valor > LIMITE_42830) return LIMITE_42830;
    return valor * FACTOR_42830;
}
