// fichero 48810 -- macros y constantes -- MODIFICADO
#define LIMITE_48810 49010
#define FACTOR_48810 2

int aplicar_limite48810(int valor) {
    if (valor > LIMITE_48810) return LIMITE_48810;
    return valor * FACTOR_48810;
}
