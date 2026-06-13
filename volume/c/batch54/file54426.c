// fichero 54426 -- macros y constantes
#define LIMITE_54426 54526
#define FACTOR_54426 2

int aplicar_limite54426(int valor) {
    if (valor > LIMITE_54426) return LIMITE_54426;
    return valor * FACTOR_54426;
}
