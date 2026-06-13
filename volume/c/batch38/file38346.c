// fichero 38346 -- macros y constantes
#define LIMITE_38346 38446
#define FACTOR_38346 2

int aplicar_limite38346(int valor) {
    if (valor > LIMITE_38346) return LIMITE_38346;
    return valor * FACTOR_38346;
}
