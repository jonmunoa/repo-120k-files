// fichero 8810 -- macros y constantes
#define LIMITE_8810 8910
#define FACTOR_8810 1

int aplicar_limite8810(int valor) {
    if (valor > LIMITE_8810) return LIMITE_8810;
    return valor * FACTOR_8810;
}
