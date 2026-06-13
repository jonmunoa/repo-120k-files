// fichero 42310 -- macros y constantes
#define LIMITE_42310 42410
#define FACTOR_42310 1

int aplicar_limite42310(int valor) {
    if (valor > LIMITE_42310) return LIMITE_42310;
    return valor * FACTOR_42310;
}
