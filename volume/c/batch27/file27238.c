// fichero 27238 -- macros y constantes
#define LIMITE_27238 27338
#define FACTOR_27238 4

int aplicar_limite27238(int valor) {
    if (valor > LIMITE_27238) return LIMITE_27238;
    return valor * FACTOR_27238;
}
