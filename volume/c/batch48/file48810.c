// fichero 48810 -- macros y constantes
#define LIMITE_48810 48910
#define FACTOR_48810 1

int aplicar_limite48810(int valor) {
    if (valor > LIMITE_48810) return LIMITE_48810;
    return valor * FACTOR_48810;
}
