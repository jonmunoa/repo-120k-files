// fichero 38810 -- macros y constantes
#define LIMITE_38810 38910
#define FACTOR_38810 1

int aplicar_limite38810(int valor) {
    if (valor > LIMITE_38810) return LIMITE_38810;
    return valor * FACTOR_38810;
}
