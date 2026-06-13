// fichero 6010 -- macros y constantes
#define LIMITE_6010 6110
#define FACTOR_6010 1

int aplicar_limite6010(int valor) {
    if (valor > LIMITE_6010) return LIMITE_6010;
    return valor * FACTOR_6010;
}
