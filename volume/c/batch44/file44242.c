// fichero 44242 -- macros y constantes
#define LIMITE_44242 44342
#define FACTOR_44242 3

int aplicar_limite44242(int valor) {
    if (valor > LIMITE_44242) return LIMITE_44242;
    return valor * FACTOR_44242;
}
