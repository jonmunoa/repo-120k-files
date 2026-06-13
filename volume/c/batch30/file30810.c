// fichero 30810 -- macros y constantes
#define LIMITE_30810 30910
#define FACTOR_30810 1

int aplicar_limite30810(int valor) {
    if (valor > LIMITE_30810) return LIMITE_30810;
    return valor * FACTOR_30810;
}
