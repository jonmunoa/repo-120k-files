// fichero 50346 -- macros y constantes
#define LIMITE_50346 50446
#define FACTOR_50346 2

int aplicar_limite50346(int valor) {
    if (valor > LIMITE_50346) return LIMITE_50346;
    return valor * FACTOR_50346;
}
