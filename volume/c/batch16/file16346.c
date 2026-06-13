// fichero 16346 -- macros y constantes
#define LIMITE_16346 16446
#define FACTOR_16346 2

int aplicar_limite16346(int valor) {
    if (valor > LIMITE_16346) return LIMITE_16346;
    return valor * FACTOR_16346;
}
