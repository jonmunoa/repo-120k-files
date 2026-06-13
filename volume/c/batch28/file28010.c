// fichero 28010 -- macros y constantes
#define LIMITE_28010 28110
#define FACTOR_28010 1

int aplicar_limite28010(int valor) {
    if (valor > LIMITE_28010) return LIMITE_28010;
    return valor * FACTOR_28010;
}
