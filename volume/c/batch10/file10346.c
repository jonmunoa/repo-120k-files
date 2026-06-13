// fichero 10346 -- macros y constantes
#define LIMITE_10346 10446
#define FACTOR_10346 2

int aplicar_limite10346(int valor) {
    if (valor > LIMITE_10346) return LIMITE_10346;
    return valor * FACTOR_10346;
}
