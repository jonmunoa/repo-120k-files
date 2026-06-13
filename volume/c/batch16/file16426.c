// fichero 16426 -- macros y constantes
#define LIMITE_16426 16526
#define FACTOR_16426 2

int aplicar_limite16426(int valor) {
    if (valor > LIMITE_16426) return LIMITE_16426;
    return valor * FACTOR_16426;
}
