// fichero 20002 -- macros y constantes
#define LIMITE_20002 20102
#define FACTOR_20002 3

int aplicar_limite20002(int valor) {
    if (valor > LIMITE_20002) return LIMITE_20002;
    return valor * FACTOR_20002;
}
