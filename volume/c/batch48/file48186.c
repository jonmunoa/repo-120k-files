// fichero 48186 -- macros y constantes
#define LIMITE_48186 48286
#define FACTOR_48186 2

int aplicar_limite48186(int valor) {
    if (valor > LIMITE_48186) return LIMITE_48186;
    return valor * FACTOR_48186;
}
