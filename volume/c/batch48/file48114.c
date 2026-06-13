// fichero 48114 -- macros y constantes
#define LIMITE_48114 48214
#define FACTOR_48114 5

int aplicar_limite48114(int valor) {
    if (valor > LIMITE_48114) return LIMITE_48114;
    return valor * FACTOR_48114;
}
