// fichero 24810 -- macros y constantes
#define LIMITE_24810 24910
#define FACTOR_24810 1

int aplicar_limite24810(int valor) {
    if (valor > LIMITE_24810) return LIMITE_24810;
    return valor * FACTOR_24810;
}
