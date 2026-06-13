// fichero 20074 -- macros y constantes
#define LIMITE_20074 20174
#define FACTOR_20074 5

int aplicar_limite20074(int valor) {
    if (valor > LIMITE_20074) return LIMITE_20074;
    return valor * FACTOR_20074;
}
